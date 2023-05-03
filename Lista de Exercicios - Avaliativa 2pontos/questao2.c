#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 500


//PROTÓTIPOS

int ValidaQuantidade(int);
float CalculaSalario(int);
int MostraFinal(int, float, int);

//MAIN

int main(){
    setlocale(LC_ALL,"portuguese");

    
    int quantos,qtd_pecas[TAM],i,cont=1;
    float salario[TAM];

    puts("\nVocê está em um programa que solicita a quantidade de peças fabricadas por cada funcionário e mostra o salário de cada um deles.\nQuantos funcionários você vai cadastrar?");
    scanf("%i", & quantos);
    for(i=0;i<quantos;i++){
        
        qtd_pecas[i],cont=ValidaQuantidade(i);
        salario[i]=CalculaSalario(qtd_pecas[i]);
        
    }
    puts("\n\nRelatório!!\n\n");
    for(i=0;i<quantos;i++){
        
       cont=MostraFinal(qtd_pecas[i],salario[i],cont);
       
               
    }    

}


//FUNÇÕES

int ValidaQuantidade(int i){
    int quantidade;

    printf("\nQuantas peças o funcionário fabricou: ");
    scanf("%i",& quantidade);
    puts("\nPróximo funcionário\n");
    return quantidade;
}

float CalculaSalario(int qtd){
    float salario;

    if(qtd<50){
            salario=600;
        }
        if(qtd>50 && qtd<=80){
            salario=600+(0.5*(qtd-50));
        }
        if(qtd>80){
            salario=600+(30*0.5)+(0.75*(qtd-80));
        }
    return salario;
}

int MostraFinal(int qtd, float sal, int cont){
    
    
    printf("\nFUNCIONÁRIO %i\nqtd peças: %i\nsalario: %.2f\n\n",cont,qtd,sal);
    cont++;
    return cont;
        
}

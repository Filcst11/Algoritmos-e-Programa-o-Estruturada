#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

//VARIÁVEIS

int funcionarios,i;

//PROTÓTIPOS

int ValidaQuantidade(int);
//float CalculaSalario(int);
//void MostraFinal(void);

//MAIN

int main(){
    setlocale(LC_ALL,"portuguese");

    char funcionarios[15][TAM];
    int qtd_pecas[TAM],i;
    float salario[TAM];

    puts("\nVocê está em um programa que solicita a quantidade de peças fabricadas por cada funcionário e mostra o salário de cada um deles.\n");
    for(i=0;i<TAM;i++){
        printf("\nEscreva o nome do %iº funcionário: \n",i+1);
        fgets(funcionarios[i],15,stdin);
        
        qtd_pecas[i]=ValidaQuantidade(i);
        
        
        if(qtd_pecas[i]<50){
            salario[i]=600;
        }
        if(qtd_pecas[i]>50 && qtd_pecas[i]<=80){
            salario[i]=600+(0.5*(qtd_pecas[i]-50));
        }
        if(qtd_pecas[i]>80){
            salario[i]=600+(30*0.5)+(0.75*(qtd_pecas[i]-80));
        }
    }
    for(i=0;i<TAM;i++){
        printf("\n\n\nnome: %s\nqtd peças: %i\nsalario: %.2f",funcionarios[i],qtd_pecas[i],salario[i]);
        
    }    

}


//FUNÇÕES

int ValidaQuantidade(int i){
    int quantidade;

    printf("\nQuantas peças ele fabricou: ");
    scanf("%i",& quantidade);
    puts("\nInformações cadastradas com sucesso!\n");
    return quantidade;
}
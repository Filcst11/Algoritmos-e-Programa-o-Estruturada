#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 500


//VARIÁVEIS

int i,qtd_assalariados,cont_menor=0,cont_maior=0;
float salario[100];
int sexo[100],classificacao[100];

//PROTÓTIPOS

int coleta_sexo(void);
float coleta_salario(void);
int classifica_salario(float);
void mostra_classificacao(void);


//MAIN

int main(){
    setlocale(LC_ALL,"portuguese");

    puts("\nQuantos assalariados?\n");
    scanf("%i", & qtd_assalariados);

    for(i=0;i<qtd_assalariados;i++){
        
        sexo[i]=coleta_sexo();
        salario[i]=coleta_salario();
    }
    puts("\nDados cadastrados com sucesso!!\n");
    for(i=0;i<qtd_assalariados;i++){
        classificacao[i]=classifica_salario(salario[i]);
    }
    mostra_classificacao();
}


//FUNÇÕES


//1=Masculino 2=Feminino
int coleta_sexo(){
    int sexo;

    puts("\nQual o sexo do entrevistado?\n1-Masculino\n2-Feminino\n");
    scanf("%i", & sexo);
    while(sexo < 1 || sexo > 2){
        puts("\nEscolha inválida!!\nQual o sexo do entrevistado?\n1-Masculino\n2-Feminino\n");
        scanf("%i", & sexo);
    }


    return sexo;
}

float coleta_salario(){
    float salario;

    puts("\nEscreva o salário do entrevistado(Ex: 1200.00)\n");
    scanf("%f", & salario);
    while(salario<0){
        puts("\nValor inválido!!\nEscreva o salário do entrevistado(Ex: 1200.00)\n");
        scanf("%f", & salario);
    }    

    return salario;
}

//0=menor 1=maior 2=igual
int classifica_salario(float x){
    int aux;

    if(x<1400){
        aux=0;
        cont_menor+=1;
        //menor
    }
    if(x>1400){
        aux=1;
        cont_maior+=1;
        //maior
    }
    if(x==1400){
        aux=2;
        //igual
    }

    return aux;
}

void mostra_classificacao(void){
    printf("\nQuantidade de assalariados com salário abaixo do mínimo: %i\nquantidade de assalariados com salário acima do mínimo: %i\n",cont_menor,cont_maior);
}
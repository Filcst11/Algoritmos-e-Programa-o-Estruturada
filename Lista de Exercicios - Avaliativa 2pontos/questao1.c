#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//variável global

float tempo[100],melhor=99999999,soma=0;
int melhor_volta,i,voltas;


//FUNÇÕES

int main(){
    float tempo[100],melhor=99999999,soma=0;
    int melhor_volta,i,voltas;
    
    setlocale(LC_ALL,"portuguese");
    puts("\nVocê está na função que recebe os tempos das N voltas de um determinado piloto, calcular e imprimir o melhor tempo, a volta em que o melhor tempo ocorreu e o tempo médio das N voltas\n\nEscreva quantas voltas tiveram na corrida: ");
    scanf("%i", & voltas);
    
    for(i=0;i<voltas;i++){
        printf("Escreva o tempo da %iº volta em segundos (Por exemplo: 45.163): ",i+1);
        scanf("%f",& tempo[i]);
        soma+=tempo[i];
        if(tempo[i]<melhor){
          melhor=tempo[i];
          melhor_volta=i;
        }
    }
    printf("\nO melhor tempo foi: %.2f\nA volta em que o melhor tempo ocorreu foi: %i\nTempo médio das %i voltas: %.2f\n",melhor,melhor_volta+1,voltas,soma/voltas);

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//VARIÁVEIS

char times[30][9];
int i,ii=0,idade_jogador=0,qtd_times=0;
float peso_jogadores=0;
int somaTime1=0,somaTime2=0,somaTime3=0,somaTime4=0,somaTime5=0,somaTime6=0,somaTime7=0,somaTime8=0,somaTime9=0;
float pesoTime1=0,pesoTime2=0,pesoTime3=0,pesoTime4=0,pesoTime5=0,pesoTime6=0,pesoTime7=0,pesoTime8=0,pesoTime9=0;
int quantidadeJogadores[9],total_jogadores=0,menor_18=0,mais_80kg=0;




//MAIN

int main(){
    setlocale(LC_ALL,"portuguese");

    puts("\nVocê está no programa de organização do campeonato FutBão de futebol de salão\nQuantos times você vai cadastrar?\n");
    scanf("%i",& qtd_times);
    
    
    for(i=0;i<qtd_times;i++){  
      puts("\nNome do time:\n");
      gets(times[i]);
    }
    
    for(i=0;i<qtd_times;i++){  
      printf("Time cadastrado: %s\nQuantos jogadores você vai cadastrar desse time?(6 a 11)\n",times[i]);
      scanf("%i\n", &quantidadeJogadores[i]);
      total_jogadores+=quantidadeJogadores[i];
      printf("Time: %s",times[i]);
      
      if(times[i]==times[0]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime1+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime1+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[1]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime2+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime2+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[2]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime3+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime3+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[3]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime4+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime4+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[4]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime5+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime5+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[5]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime6+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime6+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[6]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime7+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime7+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[7]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime8+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime8+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
      if(times[i]==times[8]){
         for(ii=0;ii<quantidadeJogadores[i];ii++){
             puts("\nEscreva a idade do jogador: \n");
             scanf("%i\n", & idade_jogador);
             somaTime9+=idade_jogador;
             if(idade_jogador<18){
                menor_18+=1;
             }
             puts("\nEscreva o peso desse jogador: \n");
             scanf("%f\n", & peso_jogadores);
             pesoTime9+=peso_jogadores;
             if(peso_jogadores>80){
                mais_80kg+=1;
             }
            }
        }
    }

    for(i=0;i<qtd_times;i++){
        
        if(times[i]==times[0]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime1/quantidadeJogadores[i],pesoTime1/quantidadeJogadores[i]);
        }
        if(times[i]==times[1]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime2/quantidadeJogadores[i],pesoTime2/quantidadeJogadores[i]);
        }
        if(times[i]==times[2]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime3/quantidadeJogadores[i],pesoTime3/quantidadeJogadores[i]);
        }
        if(times[i]==times[3]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime4/quantidadeJogadores[i],pesoTime4/quantidadeJogadores[i]);
        }
        if(times[i]==times[4]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime5/quantidadeJogadores[i],pesoTime5/quantidadeJogadores[i]);
        }
        if(times[i]==times[5]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime6/quantidadeJogadores[i],pesoTime6/quantidadeJogadores[i]);
        }
        if(times[i]==times[6]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime7/quantidadeJogadores[i],pesoTime7/quantidadeJogadores[i]);
        }
        if(times[i]==times[7]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime8/quantidadeJogadores[i],pesoTime8/quantidadeJogadores[i]);
        }
        if(times[i]==times[8]){
          printf("Time: %s\n\nMédia idade: %i\nMédia dos pesos: %.2f",times[i],somaTime9/quantidadeJogadores[i],pesoTime9/quantidadeJogadores[i]);
        }
        

    }
    printf("Jogadores menores de idade(18 anos): %i\nJogadores com mais de 80 Kg: %i\nPorcentagem jogadores +80Kg: %i%%",menor_18,mais_80kg,mais_80kg/total_jogadores);
    
    return 0;

}





#include <stdio.h>
#include <locale.h>

//variaveis

int escolha=0;

//PROTÓTIPOS

int menu(int);
void maior_numero(void);
void media_alunos(void);
void conversao(void);

//CÓDIGO PRINCIPAL

int main(){
    
    puts("\n\nVocê está em um programa da atividade da aula 5 de programação estruturada.\n");
    while(escolha!=4){
        escolha=menu(escolha);
    }
    puts("\nObrigado por utilizar o software do Felipe!!");    
    return 0;
}

//FUNÇÕES

int menu(int){
    puts("\nEscolha a função que você deseja testar:\n1-Função do maior número\n2-Função da média dos alunos\n3-Função das conversões de temperatura\n4-Sair do programa\n");
    scanf(" %i", &escolha);
    while(escolha>4 || escolha<1){
        puts("\n\nEscolha inválida\nEscolha a função que você deseja testar:\n1-Função do maior número\n2-Função da média dos alunos\n3-Função das conversões de temperatura\n4-Sair do programa\n");
        scanf(" %i", &escolha);
    }
    switch(escolha){
        case 1:
           maior_numero();
           break;
        case 2:
           media_alunos();
           break;
        case 3:
           conversao();
           break;
        case 4:
           puts("\nSaindo do programa");
           break;         
    }


    return escolha;
}

void maior_numero(void){
  int n1,n2;
  puts("\nVocê está em uma função que recolhe 2 números e informa qual o maior deles\nEscreva os números desejados(Separados por enter)\n");
  scanf(" %i %i", &n1, &n2);
  if(n1>n2){
    printf("\nO maior número digitado foi: %i\n",n1);
  }
  if(n2>n1){
    printf("\nO maior número digitado foi: %i\n",n2);
  }
  if(n1==n2){
    printf("\nOs números digitados são iguais!!\n");
  }  
}

void media_alunos(void){
  int alunos,cont=0;
  float n1,n2,n3;
  puts("\nVocê está em uma função que calcula a nota final dos alunos de uma determinada turma.\nQuantos alunos existem nessa turma?\n");
  scanf(" %i", &alunos);
  for(cont=0;cont<alunos;cont++){
    printf("\nAluno %i\nEscreva a nota da sua primeira prova:",cont+1);
    scanf(" %f", &n1);
    printf("\nAluno %i\nEscreva a nota da sua segunda prova:",cont+1);
    scanf(" %f", &n2);
    printf("\nAluno %i\nEscreva a nota da sua terceira prova:",cont+1);
    scanf(" %f", &n3);
    printf("\n\nA nota final do aluno %i foi: %f",cont+1,(n1+n2+n3)/3);    
  }
puts("\nFim da contagem dos alunos.");
}

void conversao(void){
  int esc=1;
  float temperatura;
 
  while(esc!=9){
     puts("\nVocê está na função de conversão de temperaturas.\nEscolha a conversão desejada:\n1-De graus Celsius(C) para graus Fahrenheit(F)\n2-De graus Fahrenheit (F) para graus Celsius (C)\n3-De graus Celsius (C) para graus Kelvin (K)\n4-De graus Kelvin (K) para graus Celsius (C)\n5-De graus Celsius (C) para graus Réaumur (Re)\n6-De graus Réaumur (Re) para graus Celsius (C)\n7-De graus Kelvin (K) para graus Rankine (R)\n8-De graus Rankine (R) para graus Kelvin (K)\n9-Sair do programa\n");
     scanf(" %i", &esc);
     while(esc<1 || esc>9){
         puts("\nESCOLHA INVÁLIDA!\n\nVocê está na função de conversão de temperaturas.\nEscolha a conversão desejada:\n1-De graus Celsius(C) para graus Fahrenheit(F)\n2-De graus Fahrenheit (F) para graus Celsius (C)\n3-De graus Celsius (C) para graus Kelvin (K)\n4-De graus Kelvin (K) para graus Celsius (C)\n5-De graus Celsius (C) para graus Réaumur (Re)\n6-De graus Réaumur (Re) para graus Celsius (C)\n7-De graus Kelvin (K) para graus Rankine (R)\n8-De graus Rankine (R) para graus Kelvin (K)\n9-Sair do programa\n");
        }
     switch(esc){
         case 1:
             //celcius_fahrenheit
             puts("\nEscreva a temperatura em celcius:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus fahrenheit é igual a %.2f\n",((9*temperatura)*5)+32);
              break;
         case 2:
             //fahrenheit_celcius();
             puts("\nEscreva a temperatura em fahrenheit:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus celcius é igual a %.2f\n",(temperatura - 32)*(5/9));
             break;
         case 3:
             //celcius_kelvin();
             puts("\nEscreva a temperatura em graus celcius:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus kelvin é igual a %.2f\n",(temperatura + 273.15));
             break;
         case 4:
             //kelvin_celcius();
             puts("\nEscreva a temperatura em graus kelvin:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus celcius é igual a %.2f\n",(temperatura - 273.15));
             break;
         case 5:
             //celcius_reaumur();
             puts("\nEscreva a temperatura em graus celcius:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus reaumur é igual a %.2f\n",(temperatura * (4/5)));
             break;
         case 6:
             //reaumur_celcius();
             puts("\nEscreva a temperatura em graus reaumur:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus celcius é igual a %.2f\n",(temperatura * (5/4)));
             break;
         case 7:
             //kelvin_rankine();
             puts("\nEscreva a temperatura em graus kelvin:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus rankine é igual a %.2f\n",(temperatura * 1.8));
             break;
         case 8:
             //rankine_kelvin();
             puts("\nEscreva a temperatura em graus kelvin:\n");
             scanf(" %f", &temperatura);
             printf("\nA sua temperatura em graus rankine é igual a %.2f\n",(temperatura / 1.8));
             break;
         case 9:
             puts("\nSaindo da função de conversão");
             break;  
        }
    }
}
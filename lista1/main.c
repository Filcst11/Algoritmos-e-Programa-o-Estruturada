//LISTA 1 (1 PONTO)
/*8. Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido
9. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade
10. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>

//VARIÁVEIS

int loop;

//PROTÓTIPOS

int menu(int);
void q1(void);
void q2(void);
void q3(void);
void q4(void);
void q5(void);
void q6(void);
void q7(void);
void q8(void);
void q9(void);
void q10(void);

//MAIN

int main(){
    setlocale(LC_ALL,"portuguese");
    while(loop != 11){
        loop=menu(loop);
    }
    return 0;
}

//FUNÇÕES

//Função que direciona o usuário para qual função ele deseja entrar.

int menu(int){
    puts("\n______________MENU________________\n\nEscolha a função que você quer entrar:\n1-\n2-\n3-\n4-\n5-\n6-\n7-\n8-\n9-\n10-\n11-Sair do Programa");
    scanf("%i",& loop);
    switch(loop){
        case 1:
           q1();
           break;
        case 2:
           q2();
           break;
        case 3:
           q3();
           break;
        case 4:
           q4();
           break; 
        case 5:
           q5();
           break;
        case 6:
           q6();
           break;
        case 7:
           q7();
           break;
        case 8:
           q8();
           break;
        case 9:
           q9();
           break;
        case 10:
           q10();
           break;
        case 11:
           puts("\nSaindo do programa");
           break;
        default:
           puts("\nEscolha inválida\n\n\n______________MENU________________\n\nEscolha a função que você quer entrar:\n1-\n2-\n3-\n4-\n5-\n6-\n7-\n8-\n9-\n10-\n11-Sair do Programa");
           scanf("%i", & loop);                        
    }
    return loop;
}

//Função que resolve o problema sugerido na questão 1 da lista.

void q1(void){
    
    int a,b,c,d;

    puts("\nVocê está na função que recolhe 4 valores inteiros e mostra a diferença do produto entre A e B e entre C e D\n\nEscreva os 4 valores inteiros A, B, C e D (separados por enter)");
    scanf(" %i %i %i %i", & a, & b, & c, & d);
    printf("%i * %i - %i * %i:\n%i",a,b,c,d,(a*b)-(c*d));

}

//Função que resolve o problema sugerido na questão 2 da lista.

void q2(void){
    float x1,y1,x2,y2,distancia;
    
    puts("\nVocê está na função que recolhe as coordenadas x e y de dois pontos distintos em um plano e calcula a distância entre eles\nescreva as coordenadas do primeiro ponto a(x,y)");
    printf("\nx:");
    scanf("%f", & x1);
    printf("\ny:");
    scanf("%f",& y1);
    puts("\nAgora escreva as coordenadas do ponto b(x,y)");
    printf("\nx:");
    scanf("%f", & x2);
    printf("\ny:");
    scanf("%f",& y2);

    distancia=sqrt(((x2-x1)*(x2-x1))*((y2-y1)*(y2-y1)));

    printf("\nA distância entre os dois pontos é: %.4f", distancia);

}

//Função que resolve o problema sugerido na questão 3 da lista.

void q3(void){
    
    float raio,pi=3.14159;
    
    puts("\nVocê está na função que recebe o valor do raio de uma esfera e retorna o valor da área da superfície e o valor do volume da esfera.\nEscreva o valor do raio da esfera:");
    scanf("%f", & raio);
    printf("\nO valor da área da superfície da esfera de raio %.2f é: %.2f\nO valor do volume da esfera de raio %.2f é: %.2f",raio,(4 * pi *(raio*raio)),raio,((4/3.0)*pi*(raio*raio*raio)));

}

//Função que resolve o problema sugerido na questão 4 da lista.

void q4(void){
    int x,y;

    puts("\nVocê está na função que recebe as coordenadas de um ponto a(x,y) e te informa qual o quadrante que ele pertence\nEscreva o valor das coordenadas:");
    printf("\nx:");
    scanf("%i", & x);
    printf("\ny:");
    scanf("%i", & y);

    if(x==0 && y==0){
      puts("\nEsse ponto está na origem\n");         
    }
    if(x==0 && y!=0){
        puts("\nEste ponto está sob o eixo y\n");
    }
    if(x!=0 && y==0){
        puts("\nEste ponto está sob o eixo x\n");
    }
    if(x>0 && y>0){
        puts("\nEste ponto pertence ao 1º quadrante\n");
    }
    if(x>0 && y<0){
        puts("\nEste ponto pertence ao 2º quadrante\n");
    }
    if(x<0 && y<0){
        puts("\nEste ponto pertence ao 3º quadrante\n");
    }
    if(x<0 && y>0){
        puts("\nEste ponto pertence ao 4º quadrante\n");
    }

}

//Função que resolve o problema sugerido na questão 5 da lista.

void q5(void){
    int num,i;

    puts("\nVocê está na função que escolhe um número positivo e imprime os seus divisores.\nEscreva um valor positivo:");
    scanf("%i", & num);
    printf("\nOs divisores do número %i são:\n",num);
    for(i=num;i>0;i--){
        if((num%i)==0){
            printf("~%i~",i);
        }
    }
    puts("\n\n");
}

//Função que resolve o problema sugerido na questão 6 da lista.

void q6(void){
    int num,soma=0;

    puts("\nVocê está em uma função que soma todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5\n");
    for(num=999;num>0;num--){
        if(num%5==0 || num%3==0){
            soma += num;
        }
    }
    printf("\nA soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5 é: %i\n\n",soma);
}

//Função que resolve o problema sugerido na questão 7 da lista.

void q7(void){    
    int fibonacci=0, auxiliar=1, cont, n;
    
    puts("\nVocê está na função que solicita um número N maior ou igual a zero e imprime o enésimo termo da sequência de Fibonacci\nEscreva o número N desejado:\n\n");
    scanf(" %i", &n);
    puts("\n\nSequência:\n0 ");
    for(cont=1; cont<n; cont++){
        
        fibonacci=fibonacci+auxiliar;
        auxiliar=fibonacci-auxiliar;
        printf("%i",fibonacci);
        puts(" ");
        
    }
    printf("\n\nO termo %i da sequência de Fibonacci é: %i",n,fibonacci);
}

//Função que resolve o problema sugerido na questão 8 da lista.

void q8(void){
    int i,num[100]={0},cont=0,maior,menor;
    
    puts("\nVocê está em um programa que recebe varios números inteiros até receber um número negativo, depois informa qual foi o maior e qual foi o menor número digitado.\n");
    for(i=0;num[i-1]>=0;i++){
        puts("\nEscreva um número inteiro.\n");
        scanf("%i", & num[i]);
        puts("\nNúmero cadastrado com sucesso!");
        cont+=1;
    }    
    puts("\nSaiu do loop");
    menor=num[1];
    maior=num[1];
    for(i=1;i<=cont;i++){
        if(num[i]<=menor){
            menor=num[i];
        }
        if(num[i]>=maior){
            maior=num[i];
        }
    }
    printf("\nO maior número digitado foi: %i\nO menor número digitado foi: %i\n\n",maior,menor);
}

void q9(void){
    printf("\n\n ----------- LISTA DE FRUTAS -----------\n");
    printf("1 - ABACAXI - 5,00 a unidade............\n");
    printf("2 - MAÇÃ - 1,00 a unidade...............\n");
    printf("3 - PERA - 4,00 a unidade...............\n");
    printf("4 - VOLTAR AO MENU DE ESCOLHA DE FRUTAS.\n");
    printf("5 - SAIR DO MENU E MOSTRAR VALOR TOTAL..\n\n\n");

    int fruta = 0, quantidadeFrutas;
    float soma;

    do {
        printf("\nInsira a fruta que você deseja comprar: ");
        scanf("%d", &fruta);

        switch (fruta)
        {
        case 1:
            printf("\nInsira a quantidade de abacaxis você deseja: ");
            scanf("%d", &quantidadeFrutas);
            soma += quantidadeFrutas*5.0;
            break;
        case 2:
            printf("\nInsira a quantidade de maçãs você deseja: ");
            scanf("%d", &quantidadeFrutas);
            soma += quantidadeFrutas*1.0;
            break;
        case 3:
            printf("\nInsira a quantidade de peras você deseja: ");
            scanf("%d", &quantidadeFrutas);
            soma += quantidadeFrutas*4.0;
            break;
        case 4:
            printf(" \n\n----------- LISTA DE FRUTAS -----------\n");
            printf("1 - ABACAXI - 5,00 a unidade............\n");
            printf("2 - MAÇÃ - 1,00 a unidade...............\n");
            printf("3 - PERA - 4,00 a unidade...............\n");
            printf("4 - VOLTAR AO MENU DE ESCOLHA DE FRUTAS.\n");
            printf("5 - SAIR DO MENU E MOSTRAR VALOR TOTAL..\n");
            break;
        default:
            break;
            }
        
    } while (fruta != 5);

    printf("\n\n\nO valor total da compra foi de R$%.2f\n\n", soma);
}

void q10(){
    int i = 0, numeroInteiro, soma,media=0 ;

    while (i < 10) {
        printf("Digite um número inteiro positivo: ");
        scanf("%i", & numeroInteiro);
        soma+=numeroInteiro;
        i++;
        
    }
    media=soma/10.0;
    printf("A média é: %i",media);
}
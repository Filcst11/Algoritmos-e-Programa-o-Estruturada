#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Váriavel global*/

int esc;

/*Protótipos das funções*/

int menu(int);
void crescente(void);
void decrescente(void);
void impares(void);
void multiplos_tres(void);
void soma_pares(void);
void compra_fruta(void);

//PRINCIPAL

int main(){
    int esc;
    
    setlocale(LC_ALL,"");
    puts("\nBem vindo ao programa de atividades de repetição (Aula 4).");
    
    while(esc != 9){
        esc = menu(esc);
    }
    puts("\n\nObrigado por utilizar o software do Felipe");

}

/*funções/atividades propostas*/

/*7. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. 

8. Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:

a) sexo (m e f);

b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));

c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));

d) idade em anos.

e) valor do salário.

Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.

Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos*/


int menu(int esc){
    puts("\n\n\n___________________MENU____________________");
    puts("\n\nVocê está no menu, o que você deseja fazer agora?");
    puts("\n1-Sequência crescente\n2-Sequência decrescente\n3-Sequência dos N primeiros números ímpares\n4-Descobrir os 5 primeiros números multiplos de 3 que são maiores que 0\n5-Descobrir a soma dos 50 primeiros números pares\n6-Fazer uma lista de frutas que você quer comprar para saber o preço total\n7\n8\n9-Sair\n");
    scanf("%i", &esc);
    while(esc < 1 || esc > 9){
        puts("\nResposta inválida\n1-Calcular o quadrado e a raiz quadrada de um número\n2-Informar o valor de um produto e descobrir quanto ele custa de acordo com os impostos de alguns estados\n3-Informar o DDD de um telefone e descobrir de qual cidade de Brasília ele pertence\n4-Escolher o calculo e efetuá-lo com 2 números escolhidos\n5\n6\n7\n8\n9-Sair\n");
        scanf("%i", &esc);
    }
    switch (esc)
    {
    case 1:
        crescente();
        break;
    case 2:
        decrescente();
        break;
    case 3:        
        impares();
        break;
    case 4:
        multiplos_tres();
        break;
    case 5:
        soma_pares();
        break;        
    case 6:
        compra_fruta();
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    }
    /*if(esc == 1){
        quadrado();
    }*/
    return esc;

}

/*1. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.*/

void crescente(void){
    
    int n, cont;
    
    puts("\nVocê está na função que recolhe um número N e imprime todos os numeros naturais maiores que 0 até N em ordem crescente.\n\nEscreva o valor de N:\n");
    scanf(" %i", &n);
    puts("\nA sequência de números de 0 até N ficou:\n");
    for(cont=0 ;cont <= n; cont ++){
        printf("%i\n",cont);
    }
}

/*2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.*/

void decrescente(void){

    int n, cont;
    
    puts("\nVocê está na função que recolhe um número N e imprime todos os numeros naturais maiores que 0 até N em ordem decrescente.\n\nEscreva o valor de N:\n");
    scanf(" %i", &n);
    puts("\nA sequência de números de 0 até N ficou:\n");
    for(cont=0 ;cont <= n; n --){
        printf("%i\n",n);
    }
}


/*3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).*/

void impares(void){

    int n, cont, impar=1;
    
    puts("\nVocê está na função que recolhe um número N e depois imprime os N primeiros números ímpares naturais que existem.\n\nEscreva o valor de N:\n");
    scanf(" %i", &n);
    printf("\nA sequência dos %i primeiros números ímpares ficou igual a:\n");
    for(cont = 0; cont<n ; cont++){
        printf("%i\n",impar);
        impar+=2;
    }

}

/*4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

void multiplos_tres(void){

    int mult=3;
    
    puts("\nVocê está na função que determina e mostra os 5 primeiros múltiplos de 3 considerando números maiores que 0\nOs 5 primeiros números múltiplos de 3 maiores que 0 são:\n\n");
    while(mult<16){
        printf(" %i\n", mult);
        mult+=3;
    }

}

/*5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

void soma_pares(void){

    int par=2, cont=0, soma;

    while(cont<50){
        printf("%i\n",par);
        soma+=par;
        par+=2;
        cont++;
    }
    printf("\nVocê está em uma função que calcula e imprime a soma dos 50 primeiros números pares.\n\nA soma dos 50 primeiros números pares deu: %i",soma);
}

/*6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 

1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade */

void compra_fruta(void){

    int saida,valor=0,esc1;

    puts("\nVocê está na função que estipula o valor total de uma cesta de compras com algumas frutas disponíveis para comprar.\nEscolha a fruta que você quer adicionar a cesta e aperte enter, quando não quiser mais adicionar nada, escolha (Finalizar compra)\n\n");
    while(saida!=1){
        puts("\nLista de frutas:\n1-ABACAXI (R$5,00 a unidade)\n2-MAÇÃ (R$1,00 a unidade)\n3-PERA (R$4,00 a unidade)\n4-Finalizar compra\n");
        scanf(" %i", &esc1);
        switch(esc1){
            //ABACAXI
            case 1:
                 valor+=5;
                 break;
            //MAÇÃ
            case 2:
                 valor+=1;
                 break;
            //PERA
            case 3:
                 valor+=4;
                 break;
            //FINALIZAR COMPRA
            case 4:
                 saida=1;
                 break; 
            //ESCOLHA ERRADA
            default:
                 puts("\nOpção inválida\n");
                 break;              
        }
    }
    printf("\nO valor total do seu carrinho de compras foi de: R$%i,00\n",valor);

}
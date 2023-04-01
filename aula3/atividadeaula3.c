#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

/*Variável global*/

int esc;

/*Protótipos das funções*/

int menu(int);
void quadrado(void);
void preco_estado(void);
void ddd(void);
void calculadora(void);


/*Main, onde vai rodar a função menu até que o usuário queira sair*/
int main(){
    int esc;
    
    setlocale(LC_ALL,"");
    puts("\nBem vindo ao programa da atividade da aula 3.");
    
    while(esc != 9){
        esc = menu(esc);
    }
    puts("\n\nObrigado por utilizar o software do Felipe");

}


/*Função que permite navegar pelas atividades propostas/funções (Recebe o valor de esc e retorna a nova esc escolhida pelo usuário)*/

int menu(int esc){
    puts("\n\n\n___________________MENU____________________");
    puts("\n\nVocê está no menu, o que você deseja fazer agora?");
    puts("\n1-Calcular o quadrado e a raiz quadrada de um número\n2-Informar o valor de um produto e descobrir quanto ele custa de acordo com os impostos de alguns estados\n3-Informar o DDD de um telefone e descobrir de qual cidade de Brasília ele pertence\n4-Escolher o calculo e efetuá-lo com 2 números escolhidos\n5\n6\n7\n8\n9-Sair\n");
    scanf("%i", &esc);
    while(esc < 1 || esc > 9){
        puts("\nResposta inválida\n1-Calcular o quadrado e a raiz quadrada de um número\n2-Informar o valor de um produto e descobrir quanto ele custa de acordo com os impostos de alguns estados\n3-Informar o DDD de um telefone e descobrir de qual cidade de Brasília ele pertence\n4-Escolher o calculo e efetuá-lo com 2 números escolhidos\n5\n6\n7\n8\n9-Sair\n");
        scanf("%i", &esc);
    }
    switch (esc)
    {
    case 1:
        quadrado();
        break;
    case 2:
        preco_estado();
        break;
    case 3:        
        ddd();
        break;
    case 4:
        calculadora();
        break;    
    case 9:
        break;
    }
    /*if(esc == 1){
        quadrado();
    }*/
    return esc;

}




//QUADRADO: Função que sana os requisitos da questão 1 (Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o número digitado ao quadrado e raiz quadrada do número digitado)

void quadrado(void){
    float num;

    
    puts("\nVocê está na função que recebe um número e, caso seja positivo, retorna o seu valor ao quadrado e a raiz quadrada desse número.\nEscreva o número que você queira saber a raiz quadrada e o quadrado.");
    scanf("%f", &num);
    if(num >= 0){
        printf("Número escolhido: %.2f\nRaiz desse número: %.2f\nQuadrado desse número: %.2f",num,sqrt(num),(num*num));
    }
    else{
        puts("\nNúmero negativo");
    }
}

/*PRECO_ESTADO: Função que propõe uma solução para o problema sugerido no exercício 2 (Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro)*/

void preco_estado(void){
    int estado ;
    float produto;

    puts("\nVocê está na função que recebe o preço do produto e o estado onde você vai comprá-lo e informa o valor final acrescido dos impostos.");
    puts("\nDigite o preço do produto que você quer saber:");
    scanf("%f", &produto);
    puts("\nEscolha o estado que você pretende comprar:\n1-Distrito Federal\n2-São Paulo\n3-Rio de Janeiro");
    scanf("%i", &estado);
    if(estado == 1){
        printf("\nO valor do produto ficará R$%.2f\n", produto * 1.3);
    }
    if(estado == 2){
        printf("\nO valor do produto ficará R$%.2f\n", produto * 1.25);
    }
    if(estado == 3){
        printf("\nO valor do produto ficará R$%.2f\n", produto * 1.20);
    }
    if(estado != 1 && estado != 2 && estado != 3){
        puts("\nEstado não identificado.\n");
    }
}

/*DDD: Função que propõe uma solução para o problema sugerido no exercício 3 (Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

61 - Brasília 

71 - Salvador 

11 - São Paulo 

21 - Rio de Janeiro 

32 - Juiz de Fora 

19 - Campinas 

27 - Vitória 

31 - Belo Horizonte 

Qualquer outro - uma cidade no Brasil sem identificação) */

void ddd(void){
    int ddd;

    puts("\nVocê está na função que recebe o ddd de um número e define de qual estado do Brasil ele pertence.");
    puts("\nEscreva o ddd:");
    scanf("%i", &ddd);
    switch (ddd){
    case 61:
        puts("\nTelefone de Brasília");
        break;
    case 71:
        puts("\nTelefone de Salvador");
        break;
    case 11:
        puts("\nTelefone de São Paulo");
        break;
    case 21:
        puts("\nTelefone de Rio de Janeiro");
        break;
    case 32:
        puts("\nTelefone de Juíz de Fora");
        break;
    case 19:
        puts("\nTelefone de Campinas");
        break;
    case 27:
        puts("\nTelefone de Vitória");
        break;
    case 31:
        puts("\nTelefone de Belo Horizonte");
        break;                            
    default:
        puts("\nUma cidade no Brasil sem identificação");
        break;
    }

}

/*CALCULADORA: Função que propõe uma solução para o problema sugerido no exercício 4 (Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado)*/ 

void calculadora(void){
    char operacao;
    int num1, num2;

    puts("\nVocê está na função que faz o calculo que você quiser com 2 números.");
    puts("\nEscolha o calculo que você quer fazer\n[+] Soma\n[-] Subtração\n[*] Multiplicação\n[/] Divisão");
    scanf(" %c", &operacao);
    while(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/'){
        puts("\nEscolha inválida\nEscolha o calculo que você quer fazer\n[+] Soma\n[-] Subtração\n[*] Multiplicação\n[/] Divisão");
        scanf(" %c", &operacao); 
    }
    printf("\nOperação : %c\nEscolha os dois números que você deseja efetuar essa conta:\n", operacao);
    scanf("%i%i", &num1, &num2);
    if (operacao == '+'){
        printf("\n%i %c %i = %i\n", num1, operacao, num2, num1 + num2);
    }
    if (operacao == '-'){
        printf("\n%i %c %i = %i\n", num1, operacao, num2, num1 - num2);
    }
    if(operacao == '*'){
        printf("\n%i %c %i = %i\n", num1, operacao, num2, num1 * num2);
    }
    if(operacao =='/'){
        printf("\n%i %c %i = %i\n", num1, operacao, num2, num1 / num2);
    }
}


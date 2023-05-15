#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//STRUCTS

typedef struct pessoa{
  char nome[50];
  int idade;
  char endereco[100];
}listaPessoa;

//VARIÁVEIS


//MAIN

main(){
    listaPessoa pessoa1;
    
    setlocale(LC_ALL,"");
    puts("\nEscreva o nome da pessoa:\n");
    scanf(" %50[^\n]s",& pessoa1.nome);
    puts("\nEscreva a idade da pessoa: ");
    scanf("%i",& pessoa1.idade);
    puts("\nEscreva o endereço: ");
    scanf(" %100[^\n]s",& pessoa1.endereco);

    printf("\n\n\nPessoa: %s\nIdade: %i\nEndereço: %s\n\n", pessoa1.nome,pessoa1.idade,pessoa1.endereco);
    return 0;
}
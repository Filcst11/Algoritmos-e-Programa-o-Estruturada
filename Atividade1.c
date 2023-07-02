#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//1. Crie uma estrutura para descrever restaurantes. Os membros devem armazenar o nome, o endereço, o preço médio e o tipo de comida. Crie uma lista simples encadeada e escreva um programa que utilize uma função para solicitar os dados de um elemento da lista e outra para listar todos os dados. (0,75 ponto)

//STRUCT

typedef struct restaurantes{

char nome[50];
char endereco[50];
char tipo_comida[50];
int preco_medio;
int nota;
struct restaurantes *proximo;

}Restaurantes;

//--------------------------------------VARIAVEIS-------------------------------------

int i=0;
int escolha=0;

//---------------------------------------FUNÇÕES---------------------------------------

//CADASTRAR
void cadastrar(Restaurantes **restaurante){
  Restaurantes *Novo_restaurante = (Restaurantes*)malloc(sizeof(Restaurantes));
        
  if(Novo_restaurante){
    //NOME  
    printf("\nDigite o nome do restaurante: ");
    
    fgets(Novo_restaurante->nome,50,stdin);
    
      
    //ENDEREÇO
    printf("\nDigite o Endereço do restaurante: ");
    fgets(Novo_restaurante->endereco,50,stdin);
  
    //TIPO DE COMIDA
    printf("\nDigite o tipo de comida do restaurante: ");
    fgets(Novo_restaurante->tipo_comida,50,stdin);
  
    //PREÇO MÉDIO
    printf("\nDigite o preço médio do restaurante:\n\t1-Barato\n\t2-Médio\n\t3-Caro\n");
    scanf("%i",& Novo_restaurante->preco_medio);
    while(Novo_restaurante->preco_medio < 1 || Novo_restaurante->preco_medio > 3){
      puts("\nEscolha inválida\nDigite o preço médio do restaurante:\n\t1-Barato\n\t2-Médio\n\t3-Caro\n");
      scanf("%i",& Novo_restaurante->preco_medio);
    }
    
    //NOTA
    printf("Escreva a nota de 1 a 10: ");
    scanf("%i",& Novo_restaurante->nota);
    while(Novo_restaurante->nota < 1 || Novo_restaurante->nota > 10){
      puts("\nEscolha inválida\nEscreva a nota de 1 a 10: ");
      scanf("%i",& Novo_restaurante->nota);
    }
    
    //Próximo
    Novo_restaurante->proximo = *restaurante;
    *restaurante = Novo_restaurante;
  }
  else{
    printf("Erro ao alocar memória!\n");
  }  
}


//LISTAR
void listar(Restaurantes *restaurante){
  while(restaurante != NULL){
    printf("-------------------------------------------\n\n");
    printf("Nome: %sEndereço: %sTipo de comida: %sNota: %i\n", restaurante->nome, restaurante->endereco, restaurante->tipo_comida, restaurante->nota);
    if(restaurante->preco_medio == 1){
      puts("Preço Médio: Barato");
    }
    if(restaurante->preco_medio == 2){
      puts("Preço Médio: Médio");
    }
    if(restaurante->preco_medio == 3){
      puts("Preço Médio: Caro");
    }
    printf("\n-------------------------------------------\n\n");
    restaurante = restaurante->proximo;
  }
  printf("\n\nfim da lista\n\n"); 
}


//BUSCAR
void buscar_nome(Restaurantes *restaurante){
  char nome_busca[50];
  printf("Escreva o nome do restaurante que você deseja encontrar: ");
  fgets(nome_busca,50,stdin);
  while(restaurante != NULL){
    if(strcmp(nome_busca,restaurante->nome)==0){
      printf("Restaurante encontrado:\n-------------------------------------------\n\n");
      printf("Nome: %sEndereço: %sTipo de comida: %sNota: %i\n", restaurante->nome, restaurante->endereco, restaurante->tipo_comida, restaurante->nota);
      if(restaurante->preco_medio == 1){
        puts("Preço Médio: Barato");
      }
      if(restaurante->preco_medio == 2){
        puts("Preço Médio: Médio");
      }
      if(restaurante->preco_medio == 3){
        puts("Preço Médio: Caro");
      }
      printf("\n-------------------------------------------\n\n");
    }
    restaurante = restaurante->proximo;
  }
}



//-------------------------------------------MAIN--------------------------------------

int main(void) {  
  Restaurantes *restaurante = NULL;  

  setlocale(LC_ALL,"");
  while(escolha!=4){
    puts("\nVocê está em um programa que cadastra e armazena informações de restaurantes.\nO que você deseja fazer agora?\n1-Cadastrar um restaurante\n2-Buscar um restaurante\n3-Listar todos os restaurantes cadastrados\n4-Sair");
    scanf("%i", &escolha);getchar();
    while(escolha<1 || escolha>4){
      puts("\nEscolha inválida\nVocê está em um programa que cadastra e armazena informações de restaurantes.\nO que você deseja fazer agora?\n1-Cadastrar um restaurante\n2-Buscar um restaurante pelo nome\n3-Listar todos os restaurantes cadastrados\n4-Sair");
      scanf("%i", &escolha);getchar();
    }
    switch(escolha){
      case 1:
        cadastrar(&restaurante);
        break;
      case 2:
        buscar_nome(restaurante);
        break;
      case 3:
        listar(restaurante);
        break;
      case 4:
        break;
    }
  }
  return 0;
}
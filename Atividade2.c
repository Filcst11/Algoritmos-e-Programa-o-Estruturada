#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante ao da questão 1. (0,75 pontos)

//STRUCT

typedef struct dieta{

char nome[50];
float peso_porcao;
float calorias;
struct dieta *proximo;

}Dieta;

//--------------------------------------VARIAVEIS-------------------------------------

int i=0;
int escolha=0;

//---------------------------------------FUNÇÕES---------------------------------------

//CADASTRAR
void cadastrar(Dieta **comida){
  Dieta *Nova_comida = (Dieta*)malloc(sizeof(Dieta));
        
  if(Nova_comida){
    //NOME  
    printf("\nDigite o nome da comida: ");
    
    fgets(Nova_comida->nome,50,stdin);
    
      
    //PESO DA PORÇÃO
    printf("\nDigite o peso da porção em gramas (exemplo 50):");
    scanf("%f",& Nova_comida->peso_porcao);getchar();
  
    //CALORIAS
    printf("\nDigite o número de calorias em calorias (exemplo  100):");
    scanf("%f",& Nova_comida->calorias);getchar();
    
    //Próximo
    Nova_comida->proximo = *comida;
    *comida = Nova_comida;
  }
  else{
    printf("Erro ao alocar memória!\n");
  }  
}


//LISTAR
void listar(Dieta *comida){
  while(comida != NULL){
    printf("-------------------------------------------\n\n");
    printf("Nome: %sPeso porção: %.2f gramas\nNúmero de calorias: %.2f calorias\n", comida->nome, comida->peso_porcao , comida->calorias);
    printf("\n-------------------------------------------\n\n");
    comida = comida->proximo;
  }
  printf("\n\nfim da lista\n\n"); 
}


//BUSCAR
void buscar_nome(Dieta *comida){
  char nome_busca[50];
  printf("Escreva o nome da comida que você deseja encontrar: ");
  fgets(nome_busca,50,stdin);
  while(comida != NULL){
    if(strcmp(nome_busca,comida->nome)==0){
      printf("Comida encontrada:\n-------------------------------------------\n\n");
      printf("Nome: %sPeso porção: %.2f gramas\nNúmero de calorias: %.2f calorias\n", comida->nome, comida->peso_porcao , comida->calorias);
      printf("\n-------------------------------------------\n\n");
    }
    comida = comida->proximo;
  }
}



//-------------------------------------------MAIN--------------------------------------

int main(void) {  
  Dieta *comida = NULL;  

  setlocale(LC_ALL,"");
  while(escolha!=4){
    puts("\nVocê está em um programa que cadastra e armazena informações de comidas.\nO que você deseja fazer agora?\n1-Cadastrar uma comida\n2-Buscar uma comida para saber as informações\n3-Listar todas as comidas cadastradas\n4-Sair");
    scanf("%i", &escolha);getchar();
    while(escolha<1 || escolha>4){
      puts("\nEscolha inválida\nVocê está em um programa que cadastra e armazena informações de comidas.\nO que você deseja fazer agora?\n1-Cadastrar uma comida\n2-Buscar uma comida para saber as informações\n3-Listar todas as comidas cadastradas\n4-Sair");
      scanf("%i", &escolha);getchar();
    }
    switch(escolha){
      case 1:
        cadastrar(&comida);
        break;
      case 2:
        buscar_nome(comida);
        break;
      case 3:
        listar(comida);
        break;
      case 4:
        break;
    }
  }
  return 0;
}
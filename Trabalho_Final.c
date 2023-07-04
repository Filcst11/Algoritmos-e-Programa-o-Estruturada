#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/*
-Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:

[X] inicializa_lista() = Função que inicializa uma lista vazia; (0,5 ponto)

[X] cadastra_produto() = Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)

[X] relatorio_produto() = Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (1,0 ponto)

[X] consulta_produto() = Função que permite ao usuário pesquisar um produto pelo código. (1,0 ponto)

[] remove_produto() = Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)

[X] main() = O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário escolha sair do programa.*/

//STRUCT

typedef struct estoque{

char codigo[15];
char descricao[100];
int quantidade;
float valor;
struct estoque *proximo;

}Estoque;

//--------------------------------------VARIAVEIS-------------------------------------

int i=0;
int escolha=0;

//---------------------------------------FUNÇÕES---------------------------------------


//INICIALIZA A LISTA
Estoque inicializa_lista(){
  Estoque *produto = NULL;
}

//CADASTRAR
void cadastrar(Estoque **produto){
  Estoque *Novo_produto = (Estoque*)malloc(sizeof(Estoque));
        
  if(Novo_produto){
    //CÓDIGO   
    printf("\nDigite o código do produto: ");
    fgets(Novo_produto->codigo,15,stdin);    
      
    //DESCRIÇÃO
    printf("\nDigite a descrição do produto: ");
    fgets(Novo_produto->descricao,100,stdin);
    
    //QUANTIDADE
    printf("\nDigite a quantidade de produtos à venda: ");
    scanf("%i",& Novo_produto->quantidade);getchar();
    while(Novo_produto->quantidade < 0){
      printf("Valor inválido!\nDigite a quantidade de produtos à venda: ");
      scanf("%i",& Novo_produto->quantidade);getchar();
    }

    //VALOR
    printf("\nDigite o valor numérico do produto em reais: ");
    scanf("%f",& Novo_produto->valor);getchar();
    while(Novo_produto->valor < 00.00){
      puts("\nEscolha inválida\nDigite o valor numérico do produto em reais: ");
      scanf("%f",& Novo_produto->valor);getchar();
    }
   
    //Próximo
    Novo_produto->proximo = *produto;
    *produto = Novo_produto;
  }
  else{
    printf("Erro ao alocar memória!\n");
  }  
}

//LISTAR
void listar(Estoque *produto){
  while(produto != NULL){
    printf("-------------------------------------------\n\nCódigo: %s",produto->codigo);
    printf("Descrição: %sQuantidade: %i\nValor da unidade: R$%.2f\n", produto->descricao, produto->quantidade, produto->valor);
    printf("\n-------------------------------------------\n\n");
    produto = produto->proximo;
  }
  printf("\n\nfim da lista\n\n"); 
}

//BUSCAR

void buscar(Estoque *produto){
  char codigo_busca[15];
  
  printf("Escreva o código do produto que você deseja procurar no sistema: ");
  fgets(codigo_busca,15,stdin);
  while(produto != NULL){
    if(strcmp(codigo_busca,produto->codigo)==0){
      printf("\nProduto encontrado:\n-------------------------------------------\n\n");
      printf("Código: %sDescrição: %sQuantidade: %i\nValor da unidade: R$%.2f\n",produto->codigo, produto->descricao, produto->quantidade, produto->valor);
      printf("\n-------------------------------------------\n\n");
    }
    produto = produto->proximo;
  } 
}


//REMOVER PRODUTO
Estoque* remover_produto(Estoque *produto){
  char codigo_busca[15];
  int remover;
  Estoque *produto_anterior=NULL;
  Estoque *produto_atual = produto;
  
  printf("Escreva o código do produto que você deseja remover do sistema: ");
  fgets(codigo_busca,15,stdin);
  while(produto_atual != NULL){
    if(strcmp(codigo_busca,produto_atual->codigo)==0){
      printf("\nProduto encontrado:\n-------------------------------------------\n\n");
      printf("Código: %sDescrição: %sQuantidade: %i\nValor da unidade: R$%.2f\n",produto_atual->codigo, produto_atual->descricao, produto_atual->quantidade, produto_atual->valor);
      printf("\n-------------------------------------------\n\n");
      printf("Você deseja mesmo remover este produto do sistema?\n1-Sim\n2-Não\n");
      scanf("%i",& remover);getchar();
      while(remover < 1 || remover > 2){
        printf("Escolha inválida!\nVocê deseja mesmo remover este produto do sistema?\n1-Sim\n2-Não\n");
        scanf("%i",& remover);getchar();
      }
      if(remover == 1){
        printf("Removendo o produto do sistema...");
        if(produto_anterior == NULL){
          produto = produto_atual->proximo;
        }else{
          produto_anterior->proximo = produto_atual->proximo;
        }
        return produto;
         
      }else{
        printf("Cancelando o procedimento de remoção...\n");
      }
      printf("\nOperação realizada com sucesso!\n\n");
      return produto;
    }
    produto_anterior = produto_atual;
    produto_atual = produto_atual->proximo;
  }
  printf("Produto não encontrado!");
  return produto;
}




//-------------------------------------------MAIN--------------------------------------

int main(void) {  
  Estoque *produto;
  inicializa_lista();  
  
  setlocale(LC_ALL,"");
  while(escolha!=5){
    puts("\nVocê está em um programa que registra produtos de um estoque.\nO que você deseja fazer agora?\n1-Registrar um produto novo\n2-Buscar um produto\n3-Listar todos os produtos registrados\n4-Remover um produto do estoque\n5-Sair");
    scanf("%i", &escolha);getchar();
    while(escolha<1 || escolha>5){
      puts("\nEscolha inválida\nVocê está em um programa que registra produtos de um estoque.\nO que você deseja fazer agora?\n1-Registrar um produto novo\n2-Buscar um produto\n3-Listar todos os produtos registrados\n4-Remover um produto do estoque\n5-Sair");
      scanf("%i", &escolha);getchar();
    }
    switch(escolha){
      case 1:
        cadastrar(&produto);
        break;
      case 2:
        buscar(produto);
        break;
      case 3:
        listar(produto);
        break;
      case 4:
        produto = remover_produto(produto);
        break;
      case 5:
        break;
    }
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/*3. Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro padrão:

 Proprietário:__________________________ Combustível:____________________

 Modelo: _____________________________ Cor: __________________________

Nº chassi: _________________________ Ano: __________ Placa: ____________

Em que:

• Combustível pode ser álcool, diesel ou gasolina;

• Placa possui os três primeiros valores alfabéticos e os quatro restantes valores numéricos.

Sabendo que não temos uma definição do número máximo de veículos da cidade e que é preciso armazenar todos os valores em uma lista encadeada simples, construa:

-a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel.

-b. Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.

-c. Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par.

 -d. Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero. (1,5 ponto)*/

//STRUCT

typedef struct registro{

char proprietario[50];
int combustivel;
char modelo[50];
char cor[15];
char num_chassi[20];
int ano;
char let_placa[4];
char num_placa[5];
struct registro *proximo;

}Registro;

//--------------------------------------VARIAVEIS-------------------------------------

int i=0;
int escolha=0;

//---------------------------------------FUNÇÕES---------------------------------------

//CADASTRAR
void cadastrar(Registro **carro){
  Registro *Novo_carro = (Registro*)malloc(sizeof(Registro));
        
  if(Novo_carro){
    //PROPRIETÁRIO   
    printf("\nDigite o nome do proprietário do veículo: ");
    fgets(Novo_carro->proprietario,50,stdin);    
      
    //COMBUSTÍVEL
    printf("\nDigite o combustível do carro:\n\t1-Álcool\n\t2-Diesel\n\t3-Gasolina\n");
    scanf("%i",& Novo_carro->combustivel);getchar();
    while(Novo_carro->combustivel < 1 || Novo_carro->combustivel > 3){
      printf("Valor inválido!\nDigite o combustível do carro:\n\t1-Álcool\n\t2-Diesel\n\t3-Gasolina\n");
      scanf("%i",& Novo_carro->combustivel);getchar();
    }
  
    //MODELO
    printf("\nDigite o Modelo do carro: ");
    fgets(Novo_carro->modelo,50,stdin);

    //COR
    printf("\nDigite a cor do carro: ");
    fgets(Novo_carro->cor,15,stdin);

    //NÚMERO CHASSI
    printf("\nDigite o número do chassi do carro: ");
    fgets(Novo_carro->num_chassi,20,stdin);
  
    //ANO DO CARRO
    char teste[5];
    printf("\nDigite o ano do carro: ");
    scanf("%i",& Novo_carro->ano);getchar();
    while(Novo_carro->ano < 1900 || Novo_carro->ano > 2024){
      puts("\nEscolha inválida\nDigite o ano do carro:\n");
      scanf("%i",& Novo_carro->ano);getchar();
    }
    
    //LETRAS PLACA
    int s;
    printf("\nDigite as 3 primeiras letras da placa: ");
    fgets(Novo_carro->let_placa,4,stdin);getchar();
    while(strlen(Novo_carro->let_placa) != 3){
      printf("\nvalor inválido!\nDigite as 3 primeiras letras da placa: ");
      fgets(Novo_carro->let_placa,4,stdin);
    }
    
    //NÚMEROS PLACA
    printf("\nEscreva os 4 números da placa: ");
    fgets(Novo_carro->num_placa,5,stdin);
    while(strlen(Novo_carro->num_placa) != 4){
      puts("\nEscolha inválida\nEscreva os 4 números da placa: ");
      fgets(Novo_carro->num_placa,5,stdin);
    }
    
    //Próximo
    Novo_carro->proximo = *carro;
    *carro = Novo_carro;
  }
  else{
    printf("Erro ao alocar memória!\n");
  }  
}

//LISTAR
void listar(Registro *carro){
  while(carro != NULL){
    printf("-------------------------------------------\n\nProprietário: %s",carro->proprietario);
    if(carro->combustivel == 1){
      printf("Combustível: Álcool\n");
    }
    if(carro->combustivel == 2){
      printf("Combustível: Diesel\n");
    }
    if(carro->combustivel == 3){
      printf("Combustível: Gasolina\n");
    }
    printf("Modelo: %sCor: %sNº chassi: %sAno: %d Placa: %s-%s", carro->modelo, carro->cor, carro->num_chassi, carro->ano, carro->let_placa, carro->num_placa);
    
    printf("\n-------------------------------------------\n\n");
    carro = carro->proximo;
  }
  printf("\n\nfim da lista\n\n"); 
}

//a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel.

void diesel_2010(Registro *carro){
  printf("\n\nLista dos proprietários de veículos cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel\n-------------------------------------------\n\n");
  while(carro != NULL){
    if(carro->ano >= 2010 && carro->combustivel == 2){
      printf("-%s",carro->proprietario);
    }
    carro = carro->proximo;
  }
  printf("\n-------------------------------------------\nFim da lista\n\n");
}

//b. Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.

void placaJ0247(Registro *carro){
  printf("\n\nLista das placas e proprietários de veículos cujas placas comecem com j e terminem com 0, 2, 4 ou 7\n-------------------------------------------\n\n");
  while(carro != NULL){
    if((carro->let_placa[0] == 'j' || carro->let_placa[0] == 'J') && (carro->num_placa[-1] == 0 || carro->num_placa[-1] == 2 || carro->num_placa[-1] == 4 || carro->num_placa[-1] == 7)){
      printf("-> %s%s-%s\n\n", carro->proprietario, carro->let_placa, carro->num_placa);
    }
    carro = carro->proximo;
  }
  printf("\n-------------------------------------------\nFim da lista\n\n");
}


//SUBSTITUIR PELO NUMERO DO CHASSI
void trocar_proprietario(Registro *carro){
  char chassi_busca[20];
  int substituir;
  
  printf("Escreva o chassi do carro que você deseja trocar o proprietário: ");
  fgets(chassi_busca,50,stdin);
  while(carro != NULL){
    if(strcmp(chassi_busca,carro->num_chassi)==0){
      printf("\ncarro encontrado:\n-------------------------------------------\n\n");
      printf("Antigo proprietário: %sNúmero do chassi: %s", carro->proprietario, carro->num_chassi);
      printf("\n-------------------------------------------\n\n");
      printf("Você deseja mesmo trocar o proprietário do veículo?\n1-Sim\n2-Não\n");
      scanf("%i",& substituir);getchar();
      while(substituir < 1 || substituir > 2){
        printf("Escolha inválida!\nVocê deseja mesmo trocar o proprietário do veículo?\n1-sim\n2-Não\n");
        scanf("%i",& substituir);getchar();
      }
      if(substituir == 1){
        printf("Escreva o nome do novo proprietário: ");
        fgets(carro->proprietario,50,stdin); 
      }else{
        return 0;
      }
      printf("\nOperação realizada com sucesso!\n\n");
    }
    carro = carro->proximo;
  }
}



//-------------------------------------------MAIN--------------------------------------

int main(void) {  
  Registro *carro = NULL;  

  setlocale(LC_ALL,"");
  while(escolha!=6){
    puts("\nVocê está em um programa que registra carros.\nO que você deseja fazer agora?\n1-Registrar um carro novo\n2-Trocar o proprietário de um carro cadastrado\n3-Listar todos os carros registrados\n4-Listar proprietários de veículos com ano depois de 2010 e que rodem a diesel\n5-Listar proprietários e placas dos veículos com placas começadas em 'j' e terminadas em 0, 2, 4 ou 7\n6-Sair");
    scanf("%i", &escolha);getchar();
    while(escolha<1 || escolha>6){
      puts("\nEscolha inválida\nVocê está em um programa que registra carros.\nO que você deseja fazer agora?\n1-Registrar um carro novo\n2-Trocar o proprietário de um carro cadastrado\n3-Listar todos os carros registrados\n4-Listar proprietários de veículos com ano depois de 2010 e que rodem a diesel\n5-Listar proprietários e placas dos veículos com placas começadas em 'j' e terminadas em 0, 2, 4 ou 7\n6-Sair");
      scanf("%i", &escolha);getchar();
    }
    switch(escolha){
      case 1:
        cadastrar(&carro);
        break;
      case 2:
        trocar_proprietario(carro);
        break;
      case 3:
        listar(carro);
        break;
      case 4:
        diesel_2010(carro);
        break;
      case 5:
        placaJ0247(carro);
        break;
      case 6:
        break;
    }
  }
  return 0;
}
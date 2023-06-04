#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX_USUARIOS 1000

/*STRUCT*/

typedef struct{
    int id;
    char nome[50];
    char email[50];
    int sexo;
    char endereco[100];
    float altura;
    int vacina;
}Usuarios;

/*Variável global*/

Usuarios usuario[MAX_USUARIOS];
int esc;
int qtd_usuarios=0; 
int num_usuario=0;

/*Protótipos das funções*/

int menu(int);
void cadastro();
void imprimir();
void busca();


//PRINCIPAL

int main(){
        
    setlocale(LC_ALL,"");
    puts("\nBem vindo ao programa da atividade avaliativa (0,5 pts).");
    
    while(esc != 8){
        esc = menu(esc);
    }
    puts("\n\nObrigado por utilizar o software do Felipe");

}

//FUNÇÕES

int menu(int esc){
    puts("\n\n\n___________________MENU____________________");
    puts("\n\nVocê está no menu, o que você deseja fazer agora?");
    puts("\n1-Incluir\n2-Editar\n3-Excluir\n4-Buscar\n5-Imprimir\n6-Backup\n7-Restaurar\n8-Sair\n\n");
    scanf("%i", &esc);
    while(esc < 1 || esc > 9){
        puts("\n1-Incluir\n2-Editar\n3-Excluir\n4-Buscar\n5-Imprimir\n6-Backup\n7-Restaurar\n8-Sair\n\n");
        scanf("%i", &esc);
    }
    switch (esc){
    case 1:
        cadastro();
        break;
    case 2:
        
        break;
    case 3:        
        
        break;
    case 4:
        busca();
        break;
    case 5:
        imprimir();
        break;        
    case 6:
        
        break;
    case 7:
        
        break;
    case 8:
        puts("\nSaindo do programa");
        break;
    default:
        puts("\nEscolha inválida");
        break;
    }
  return esc;

}


//Cadastro
void cadastro(){
    Usuarios Novo_Usuario;
    
    //ID
    Novo_Usuario.id = rand() % 2000 + 1;
    //printf("%i", Novo_Usuario.id);
    
    //NOME
    printf("Digite o nome:");
    scanf(" %50[^\n]s",& Novo_Usuario.nome);
    

    //E-MAIL 
    printf("Digite o e-mail:");
    scanf(" %50[^\n]s",& Novo_Usuario.email);
    //printf("%s",Novo_Usuario.email);
    

    //SEXO
    puts("\nDigite o sexo\n1-Feminino\n2-Masculino\n3-Indiferente.");
    scanf("%i",&Novo_Usuario.sexo);
    if(Novo_Usuario.sexo != 1 && Novo_Usuario.sexo != 2 && Novo_Usuario.sexo != 3){
      puts("\nEntrou no if\nEscolha inválida\nDigite o sexo\nFeminino,Masculino ou Indiferente.");
      scanf("%i",&Novo_Usuario.sexo);
    }
    while(Novo_Usuario.sexo != 1 && Novo_Usuario.sexo != 2 && Novo_Usuario.sexo != 3){
      puts("\nEscolha inválida\nDigite o sexo\nFeminino,Masculino ou Indiferente.");
      scanf("%i",&Novo_Usuario.sexo);
    }

    //ENDEREÇO
    puts("\nDigite o Endereço\n");
    scanf(" %100[^\n]s", & Novo_Usuario.endereco);

    //ALTURA
    puts("\nEscreva o tamanho:");
    scanf("%f",& Novo_Usuario.altura);
    //printf("%f",Novo_Usuario.altura);
    //while(Novo_Usuario.altura <= 1.0 || Novo_Usuario.altura >= 2.0){
    //  puts("\nAltura inválida\nEscreva uma altura entre 1 e 2 metros:");
    //  scanf("% lf",& Novo_Usuario.altura);
    //}

    //VACINA
    puts("\nEscreva a condição de vacina\n1-sim\n2-Não");
    scanf("%i",& Novo_Usuario.vacina);
    while(Novo_Usuario.vacina != 1 && Novo_Usuario.vacina != 2){
      printf("\nEscolha inválida\nEscreva a condição de vacina\n1-sim\n2-Não:");
      scanf("% i",& Novo_Usuario.vacina);
    }

    usuario[num_usuario]=Novo_Usuario;
    num_usuario++;
    qtd_usuarios++;
    
}

//Imprimir
void imprimir(){
  int i;
  for(i=0;i<qtd_usuarios;i++){
    
    puts("\n-------------------------------------------");
    printf("Nome usuário: %s\n",usuario[i].nome);
    printf("id do usuário: %i\n",usuario[i].id);
    printf("E-mail do usuário: %s\n",usuario[i].email);
    if(usuario[i].sexo == 1){
      printf("sexo usuário: Feminino\n");
    }
    if(usuario[i].sexo == 2){
      printf("sexo usuário: Masculino\n");
    }
    if(usuario[i].sexo == 3){
      printf("sexo usuário: Indiferente\n");
    }
    printf("Endereço do usuário: %s\n",usuario[i].endereco);
    printf("Altura usuário: %.2f\n",usuario[i].altura);
    if(usuario[i].vacina == 1){
      printf("Usuário Vacinado\n");
    }
    if(usuario[i].vacina == 2){
      printf("Usuário não Vacinado\n");
    }
    puts("-------------------------------------------");
  }  
}

void busca(){
  char email_busca[50];
  int i;
  
  puts("\nEscreva o e-mail que você deseja procurar:");
  scanf(" %50[^\n]s",& email_busca);
  for(i=0;i<qtd_usuarios;i++){
    printf("%s %s",email_busca, usuario[i].email);
    if(strcmp(email_busca,usuario[i].email)==0){
      puts("\n-------------------------------------------\n");
      printf("Nome usuário: %s\n",usuario[i].nome);
      printf("id do usuário: %i\n",usuario[i].id);
      printf("E-mail do usuário: %s\n",usuario[i].email);
      if(usuario[i].sexo == 1){
        printf("sexo usuário: Feminino\n");
      }
      if(usuario[i].sexo == 2){
        printf("sexo usuário: Masculino\n");
      }
      if(usuario[i].sexo == 3){
        printf("sexo usuário: Indiferente\n");
      }
      printf("Endereço do usuário: %s\n",usuario[i].endereco);
      printf("Altura usuário: %.2f\n",usuario[i].altura);
      if(usuario[i].vacina == 1){
        printf("Usuário Vacinado\n");
      }
      if(usuario[i].vacina == 2){
        printf("Usuário não Vacinado\n");
      }
      puts("-------------------------------------------");
    }else{
      printf(".");
    }
  }
  
}
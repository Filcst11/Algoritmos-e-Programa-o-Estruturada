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

/*Protótipos das funções*/

int menu(int);
void cadastro();
void editar();
void imprimir();
void busca();
void excluir();
void backup();
void restaurar();

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
    puts("\n1-Incluir\n2-Editar\n3-Excluir\n4-Buscar\n5-Imprimir\n6-Backup\n7-Restaurar backup\n8-Sair\n\n");
    scanf("%i", &esc);
    while(esc < 1 || esc > 9){
        puts("\n1-Incluir\n2-Editar\n3-Excluir\n4-Buscar\n5-Imprimir\n6-Backup\n7-Restaurar backup\n8-Sair\n\n");
        scanf("%i", &esc);
    }
    switch (esc){
    case 1:
        cadastro();
        break;
    case 2:
        editar();
        break;
    case 3:        
        excluir();
        break;
    case 4:
        busca();
        break;
    case 5:
        imprimir();
        break;        
    case 6:
        backup();
        break;
    case 7:
        restaurar();
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
    
    usuario[qtd_usuarios]=Novo_Usuario;
    qtd_usuarios++;        
}

//EDITAR
void editar(){
  Usuarios Editar_usuario;
  int id_editar,continua;
  
  puts("\nEscreva a id do usuário que você deseja editar");
  scanf("%i",& id_editar);
  for(int i = 0; i < qtd_usuarios; i++){
    if(id_editar == usuario[i].id){
      puts("\nVocê deseja editar este usuário?\n");
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
      puts("\n-------------------------------------------\n\n1-Sim\n2-Não");
      scanf("%i",& continua);
      if(continua == 1){
        //ID
        Editar_usuario.id = usuario[i].id;
        
        //NOME
        printf("Digite o nome:");
        scanf(" %50[^\n]s",& Editar_usuario.nome);
    

        //E-MAIL 
        printf("Digite o e-mail:");
        scanf(" %50[^\n]s",& Editar_usuario.email);
        //printf("%s",Editar_usuario.email);
    

        //SEXO
        puts("\nDigite o sexo\n1-Feminino\n2-Masculino\n3-Indiferente.");
        scanf("%i",&Editar_usuario.sexo);
        if(Editar_usuario.sexo != 1 && Editar_usuario.sexo != 2 && Editar_usuario.sexo != 3){
          puts("\nEntrou no if\nEscolha inválida\nDigite o sexo\nFeminino,Masculino ou Indiferente.");
          scanf("%i",&Editar_usuario.sexo);
        }
        while(Editar_usuario.sexo != 1 && Editar_usuario.sexo != 2 && Editar_usuario.sexo != 3){
          puts("\nEscolha inválida\nDigite o sexo\nFeminino,Masculino ou Indiferente.");
          scanf("%i",&Editar_usuario.sexo);
        }

        //ENDEREÇO
        puts("\nDigite o Endereço\n");
        scanf(" %100[^\n]s", & Editar_usuario.endereco);

        //ALTURA
        puts("\nEscreva o tamanho:");
        scanf("%f",& Editar_usuario.altura);
        //printf("%f",Novo_Usuario.altura);
        //while(Novo_Usuario.altura <= 1.0 || Novo_Usuario.altura >= 2.0){
        //  puts("\nAltura inválida\nEscreva uma altura entre 1 e 2 metros:");
        //  scanf("% lf",& Novo_Usuario.altura);
        //}

        //VACINA
        puts("\nEscreva a condição de vacina\n1-sim\n2-Não");
        scanf("%i",& Editar_usuario.vacina);
        while(Editar_usuario.vacina != 1 && Editar_usuario.vacina != 2){
          printf("\nEscolha inválida\nEscreva a condição de vacina\n1-sim\n2-Não:");
          scanf("% i",& Editar_usuario.vacina);
        }

        usuario[i]=Editar_usuario;
        return 0;
      }
    }else{
      puts("\nNão encontrou");
    }
  }
}

//EXCLUIR
void excluir(){
  int i,i_excluir,id_excluir;
  
  puts("\nVocê deseja excluir qual registro?\nProcure a Id pela função de busca ou pela função de imprimir.\nId:");
  scanf("%i", & id_excluir);
  for(i=0;i<qtd_usuarios;i++){
    if(id_excluir == usuario[i].id){
      i_excluir = i;
    }
  }
  for(i=i_excluir;i<qtd_usuarios;i++){
    char *aux_nome[50], *aux_email[50], *aux_endereco[100];

    *aux_nome = usuario[i+1].nome;
    
    usuario[i].id = usuario[i+1].id;
    strcpy(usuario[i].nome, usuario[i+1].nome);
    strcpy(usuario[i].email, usuario[i+1].email);
    usuario[i].sexo = usuario[i+1].sexo;
    strcpy(usuario[i].endereco, usuario[i+1].endereco);
    usuario[i].altura = usuario[i+1].altura;
    usuario[i].vacina = usuario[i+1].vacina;
  }
  qtd_usuarios-=1;
}

//BUSCA
void busca(){
  char email_busca[50];
  int i;
  
  puts("\nEscreva o e-mail que você deseja procurar:");
  scanf(" %50[^\n]s",& email_busca);
  for(i=0;i<qtd_usuarios;i++){
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

//IMPRIMIR
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

//BACKUP
void backup(){
  int esc;
  
  puts("\nVocê realmente deseja fazer um backup?\n1-Sim\n2-Não");
  scanf("%i", & esc);
  if(esc == 1){
    FILE *backup = fopen("backup.txt","w");
    Usuarios user_backup;

    for(int i = 0; i < qtd_usuarios; i++){
      fprintf(backup,"%i %s %s %i %s %.2f %i \n", usuario[i].id, usuario[i].nome, usuario[i].email, usuario[i].sexo, usuario[i].endereco, usuario[i].altura, usuario[i].vacina);
    } 
    fclose(backup);
  }
  return 0;
}

//RESTAURAR
void restaurar(){
  int esc;
  
  puts("\nVocê realmente deseja restaurar o backup anterior?\n1-Sim\n2-Não\n");
  scanf("%i",& esc);
  if(esc == 1){
    puts("\nRestaurando backup\n");
    //Descobrindo qtd de linhas no arquivo backup.txt
    
    FILE *arquivo = fopen("backup.txt","r");
    char c;
    int qtd_linhas=0;

    if(arquivo==NULL){
      puts("\nBackup inexistente");
      return 0;
    }else{
      while((c = fgetc(arquivo)) != EOF){
        if(c == '\n'){
          qtd_linhas++;
        }
      }
    }
    fclose(arquivo);

    //Fazendo restauração
    
    if(qtd_linhas > 0){
      FILE *restaurar = fopen("backup.txt","r");
      for(int i = 0; i < qtd_linhas; i++){
        fscanf(restaurar, "%i %s %s %i %s %f %i \n", &usuario[i].id, usuario[i].nome, usuario[i].email, &usuario[i].sexo, usuario[i].endereco, &usuario[i].altura, &usuario[i].vacina);
        qtd_usuarios++;
        printf("qtd_usuarios %i\n", qtd_usuarios);
      }    
      fclose(restaurar);
    }
    //FIM Fazendo restauração
    
    
  }
  return 0;
}

#include <stdio.h>
#include <locale.h>
#define TAM 5

//STRUCTS

typedef struct alunos{

    char matricula[15];
    char nome[50];
    int n1,n2,n3;

}lista_alunos;

//VARIÁVEIS

int i,i_maior_n1=0,i_media_maior=0,i_media_menor=0;
lista_alunos aluno[TAM];

//MAIN

main(){
    
    setlocale(LC_ALL,"");

    puts("\nAcrescente as informações dos 5 alounos: ");
    
    for(i=0;i<TAM;i++){
        printf("Aluno %i",i+1);
        puts("\nEscreva o nome: ");
        scanf(" %50[^\n]s",& aluno[i].nome);
        puts("\nEscreva a matrícula: ");
        scanf(" %15[^\n]s",& aluno[i].matricula);
        puts("\nEscreva a nota da 1ª prova: ");
        scanf(" %i", & aluno[i].n1);
        puts("\nEscreva a nota da 2ª prova: ");
        scanf(" %i", & aluno[i].n2);
        puts("\nEscreva a nota da 3ª prova: ");
        scanf(" %i", & aluno[i].n3);
        if(aluno[i].n1>aluno[i_maior_n1].n1){
            i_maior_n1=i;
            puts("maior n1");
        }
        if((aluno[i].n1+aluno[i].n2+aluno[i].n3)/3 >= (aluno[i_media_maior].n1+aluno[i_media_maior].n2+aluno[i_media_maior].n3)/3){
            i_media_maior=i;
            //puts("Media maior");
        }
        if((aluno[i].n1+aluno[i].n2+aluno[i].n3)/3 <= (aluno[i_media_menor].n1+aluno[i_media_menor].n2+aluno[i_media_menor].n3)/3){
            i_media_menor=i;
            //puts("Media menor");
        }
        puts("\nInformações cadastradas com sucesso\n\n");
    }
    printf("_____________RESULTADOS____________\n\n");
    printf("Aluno com a maior nota da prova 1: %s\nAluno com maior media geral: %s\nAluno com menor média geral: %s\n\n",aluno[i_maior_n1].nome,aluno[i_media_maior].nome,aluno[i_media_menor].nome);
    for(i=0;i<TAM;i++){
        printf("Aluno %s: ",aluno[i].nome);
        if((aluno[i].n1+aluno[i].n2+aluno[i].n3)/3 > 7){
            puts("Aprovado");
        }else{
            puts("Reprovado");
        }
    }
}
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 5

//STRUCTS

typedef struct alunos{
    char nome[50];
    char numero_matricula[15];
    char curso[50];

}lista_alunos;

//VARIÁVEIS

int i,aluno[TAM];

//MAIN

main(){
    lista_alunos aluno[TAM];
    
    setlocale(LC_ALL,"");

    for(i=0;i<TAM;i++){
        
        printf("\nEscreva o nome do aluno %i: ",i+1);
        scanf(" %50[^\n]s",& aluno[i].nome);
        printf("\nEscreva a matícula do aluno %i: ",i+1);
        scanf(" %15[^\n]s",& aluno[i].numero_matricula);
        printf("\nEscreva o curso do aluno %i: ", i+1);
        scanf(" %50[^\n]s",& aluno[i].curso);
        puts("\nInformações cadastradas!!\n");
    }
    for(i=0;i<TAM;i++){
        printf("\n\n\nAluno: %s\nMatrícula: %s\nCurso: %s\n\n",aluno[i].nome,aluno[i].numero_matricula,aluno[i].curso);
    }
}
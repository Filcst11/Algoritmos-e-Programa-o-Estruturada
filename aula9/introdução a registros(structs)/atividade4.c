#include <stdio.h>
#include <locale.h>
#define TAM 2

//4. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a media mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos  dados do vetor de reprovados. 

//STRUCTS 

typedef struct TodosAlunos{
    char nome[50];
    char matricula[15];
    float MediaFinal;
}Lista_todos_alunos;

typedef struct AlunosAprovados{
    char nome[50];
    char matricula[15];
    float MediaFinal;
}Lista_alunos_aprovados;

typedef struct AlunosReprovados{
    char nome[50];
    char matricula[15];
    float MediaFinal;
}Lista_alunos_reprovados;


//VARIÁVEIS

int i,qtd_aprovados=0,qtd_reprovados=0;
Lista_todos_alunos alunos[TAM];
Lista_alunos_aprovados alunoAprovado[TAM];
Lista_alunos_reprovados alunoReprovado[TAM];

//MAIN

main(){
    setlocale(LC_ALL,"");

    puts("\nEscreva os dados dos alunos:\n");
    for(i=0;i<TAM;i++){
        printf("Escreva o nome do %i° aluno",i+1);
        scanf(" %50[^\n]s",& alunos[i].nome);
        printf("Escreva a Matrícula do %i° aluno",i+1);
        scanf(" %15[^\n]s",& alunos[i].matricula);
        printf("Escreva a Media final do %i° aluno",i+1);
        scanf(" %f",& alunos[i].MediaFinal);

        if(alunos[i].MediaFinal < 5){
            alunoReprovado[i].matricula = alunos[i].matricula;
            alunoReprovado[i].nome = alunos[i].nome;
            alunoReprovado[i].MediaFinal = alunos[i].MediaFinal;
            qtd_reprovados+=1;
            puts("\nReprovado");
        }
        if(alunos[i].MediaFinal > 5){
            (alunoAprovado[i].matricula) = alunos[i].matricula;
            alunoAprovado[i].nome = alunos[i].nome;
            alunoAprovado[i].MediaFinal = alunos[i].MediaFinal;
            qtd_aprovados+=1;
            puts("\nAprovado");
        }
        puts("\nDados cadastrados com sucesso\n");
    }
    puts("\nResultados:\n\nAlunos Aprovados:");
    
    for(i=0;i<qtd_aprovados;i++){
        printf("-%s\n",alunoAprovado[i].nome);                
    }

    puts("\n\nAlunos Reprovados:");
    
    for(i=0;i<qtd_reprovados;i++){
        printf("-%s\n",alunoReprovado[i].nome);                
    }

}

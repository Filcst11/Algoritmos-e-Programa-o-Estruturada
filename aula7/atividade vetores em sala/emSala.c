#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//variável global

int escolha=0;

//protótipos

int menu(int);
void q1(void);
void q2(void);
void q3(void);
void q4(void);
void q5(void);
void q6(void);
void q7(void);
void q8(void);
void q9(void);
void q10(void);
void q11(void);
void q12(void);
void q13(void);

//Principal

int main(){
    setlocale(LC_ALL,"portuguese");
    while(escolha != 14){
        escolha=menu(escolha);
    }
}

//Função menu que direciona o usuário pelas questões

int menu(int){
    puts("\n___________MENU_____________");
    puts("\nVocê está no programa da atividade de vetores.\nEscolha a questão que você quer entrar:\n1-Questão 1 \n2-Questão 2\n3-Questão 3\n4-Questão 4\n5-Questão 5\n6-Questão 6\n7-Questão 7\n8-Questão 8\n9-Questão 9\n10-Questão 10\n11-Questão 11\n12-Questão 12\n13-Questão 13\n14-Sair do programa\n");
    scanf("%i", & escolha);
    while(escolha < 1 || escolha > 14){
        puts("\nEscolha a questão que você quer entrar:\n1-Questão 1 \n2-Questão 2\n3-Questão 3\n4-Questão 4\n5-Questão 5\n6-Questão 6\n7-Questão 7\n8-Questão 8\n9-Questão 9\n10-Questão 10\n11-Questão 11\n12-Questão 12\n13-Questão 13\n14-Sair do programa\n");
    }
    switch(escolha){
        case 1:
           q1();
           break;
        case 2:
           q2();      
           break;
        case 3:
           q3();
           break;
        case 4:
           q4();
           break;
        case 5:
           q5();
           break;
        case 6:
           q6();
           break; 
        case 7:
           q7();
           break;
        case 8:
           q8();
           break;
        case 9:
           q9();
           break;
        case 10:
           q10();
           break;
        case 11:
           q11();
           break;
        case 12:
           q12();
           break;
        case 13:
           q13();
           break;
        case 14:
           puts("\nSaindo do programa!");
           break;                    
    }
    return escolha;
}

//funçoes

void q1(void){
    int i,soma,A[6]= {1,0,5,-2,-5,7};
    
    puts("\nVocê está na questão 1\n");
    soma= A[0] + A[1] + A[5];
    printf("\nA soma de A[0] + A[1] + A[5] = %i", soma);
    A[4] = 100;
    for(i=0;i<6;i++){
        printf("\nA[%i] = %i",i,A[i]);
    }    
}

void q2(void){
    int i,valores[6];
   
    puts("\nVocê está na questão 2\n");
    for(i=0;i<6;i++){
        printf("\nEscreva o %iº valor desejado:",i+1);
        scanf("%i", & valores[i]);
    }
    puts("\nNúmeros cadastrados:");
    for(i=0;i<6;i++){
        printf("\n%iº Valor: %i",i+1,valores[i]);
    }
}

void q3(void){
    int i,valor[10],valor2[10];

    puts("\nVocê está na questão 3\n");
    for(i=0;i<10;i++){
        printf("\nEscreva o %iº valor desejado: ", (i+1));
        scanf("%i",& valor[i]);
    }
    for(i=0;i<10;i++){
        valor2[i]=valor[i]*valor[i];
    }
    puts("\nLista 1:");
    for(i=0;i<10;i++){
        printf("%i, ",valor[i]);
    }
    puts("\nLista 2:");
    for(i=0;i<10;i++){
        printf("%i, ",valor2[i]);
    }
}

void q4(void){
    int i,vetor[8],esc1,esc2;

    puts("\nVocê está na questão 4\n");
    for(i=0;i<8;i++){
        printf("\nEscreva o %iº valor desejado: ", (i+1));
        scanf("%i",& vetor[i]);
    }
    puts("\nAgora escreva 2 valores para os índices desejados de 0 a 7(separados por enter):");
    scanf("%i %i",& esc1, & esc2);
    while(esc1 < 0 || esc1 > 7 || esc2 < 0 || esc2 > 7 ){
        puts("Escolha inválida!\nEscreva 2 valores para os índices desejados de 0 a 7(separados por enter):");
        scanf("%i %i",& esc1, & esc2);
    }
    printf("A soma dos valores encontrados nas posições %i e %i é: %i + %i = %i", esc1, esc2,vetor[esc1],vetor[esc2],(vetor[esc1]+vetor[esc2]));
}

void q5(void){
    int i,vetor[10],qtd=0;

    puts("\nVocê está na questão 5\n");
    for(i=0;i<10;i++){
        printf("Escreva o %iº valor desejado: ",i+1);
        scanf("%i", & vetor[i]);
    }
    for(i=0;i<10;i++){
        if(vetor[i]%2 == 0){
            qtd+=1;
        }
    } 
    printf("\nA quantidade de números pares digitados pelo usuário: %i", qtd);
}

void q6(void){
    int vetor[10],i,maior,menor;

    puts("\nVocê está na questão 6\n");
    for(i=0;i<10;i++){
        printf("Escreva o %i valor desejado: ",i+1);
        scanf("%i", & vetor[i]);
    }
    maior=vetor[0];
    menor=vetor[0];
    for(i=0;i<10;i++){
        if(vetor[i]<menor){
            menor=vetor[i];
        }
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    printf("O maior valor digitado foi: %i\nO menor valor digitado foi: %i",maior,menor);

}

void q7(void){
    int vetor[10],i,maior,posicao;

    puts("\nVocê está na questão 7\n");
    for(i=0;i<10;i++){
        printf("Escreva o %iº valor desejado: ",i+1);
        scanf("%i", & vetor[i]);
    }
    maior=vetor[0];
    posicao=0;
    for(i=0;i<10;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            posicao=i;
        }
    }
    printf("O maior valor digitado foi: %i\nA posição que ele foi digitado era: %iº\n\n",maior,posicao+1);

}

void q8(void){
    int vetor[6],i;

    puts("\nVocê está na questão 8\n");
    for(i=0;i<6;i++){
        printf("Escreva o %iº valor desejado: ",i+1);
        scanf("%i", & vetor[i]);
    }
    puts("\nMostrando ao inverso:");
    for(i=5;i>=0;i--){
        printf("%i\n",vetor[i]);
    }
}

void q9(void){
    int vetor[6],i;

    puts("\nVocê está na questão 9\n");
    puts("\nEscreva 6 valores pares:\n");
    for(i=0;i<6;i++){
        printf("Escreva o %iº número desejado:",i+1);
        scanf("%i", & vetor[i]);
        while (vetor[i]%2!=0)
        {
            puts("\nNúmero ímpar\nEscreva um valor par:");
            scanf("%i", & vetor[i]);
        }
    }
    puts("\nNúmeros cadastrados na ordem inversa:\n");
    for(i=5;i>=0;i--){
        printf("%i ",vetor[i]);
    }
    puts("\n\n\n");

}

void q10(void){
    int notas[15],i,soma=0;

    puts("\nVocê está na questão 10\n");
    for (i = 0; i < 15; i++)
    {
        printf("Escreva a nota do %iº aluno:",i+1);
        scanf("%i", & notas[i]);

    }
    puts("\nNotas cadastradas com sucesso!\n");
    for(i=0;i<15;i++){
        soma+=notas[i];
        
    }
    printf("\nMédia geral: %i\n\n",soma/15);
}

void q11(void){
    int vetor[10],i,qtd_negativos=0,soma_positivos=0,aux_positivos=0;

    puts("\nVocê está na questão 11\n");
    for(i=0;i<10;i++){
        printf("\nEscreva o %iº valor desejado: ",i+1);
        scanf("%i", & vetor[i]);
        if(vetor[i]<0){
            qtd_negativos+=1;
        }
        if(vetor[i]>0){
            soma_positivos+=vetor[i];
            aux_positivos+=1;
        }
    }
    printf("\nValores coletados com sucesso\n\nQuantidade de números negativos: %i\nMédia dos números positivos: %i\n\n\n",qtd_negativos,(soma_positivos/aux_positivos));
}

void q12(void){
    int vetor[5],i,maior=-99999,menor=99999,soma=0;

    puts("\nVocê está na questão 12\n");
    for(i=0;i<5;i++){
        printf("\nEscreva o %iº valor desejado: ",i+1);
        scanf("%i", & vetor[i]);
        soma+=vetor[i];
        if(vetor[i]<menor){
            menor=vetor[i];
        }
        if(vetor[i]>maior){
            maior=vetor[i];
        }

    }
    printf("\nValores lidos:");
    for(i=0;i<5;i++){
        printf("%i ",vetor[i]);
    }
    printf("\nMaior valor digitado: %i\nMenor valor digitado: %i\nMédia: %i",maior,menor,(soma/5));
}

void q13(void){
    int vetor[5],i;
}
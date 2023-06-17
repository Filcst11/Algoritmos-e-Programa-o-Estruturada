#include <stdio.h>
#include <stdlib.h>
#define MAX 3

main(){
    FILE *arquivo = fopen("notas.txt","a");
    char nome[50][MAX];
    float n1[3], n2[3], n3[3];

    
    for(int i=0;i<MAX;i++){
        printf("\nEscreva o nome do %iº estudante\n",i+1);
        scanf(" %50[^\n]c", & nome[i]);
        printf("Escreva a nota 1 do %s\n", nome[i]);
        scanf("%f", & n1[i]);
        printf("Escreva a nota 2 do %s\n", nome[i]);
        scanf("%f", & n2[i]);
        printf("Escreva a nota 3 do %s\n", nome[i]);
        scanf("%f", & n3[i]);
        fprintf(arquivo, "%s  %.1f  %.1f  %.1f \n", nome[i],n1[i],n2[i],n3[i]);
    }
    fclose(arquivo);
}
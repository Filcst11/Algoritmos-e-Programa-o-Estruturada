#include <stdio.h>
#include <stdlib.h>
#define MAX 3

main(){
    FILE *arquivo = fopen("notas.txt","r");
    char nome[12];
    float n1, n2, n3;

    while(fscanf(arquivo,"%s %f %f %f \n", nome, &n1, &n2, &n3)!= EOF){
        printf("Nome:%s\nn1:%.2f\nn2:%.2f\nn3:%.2f\nMédia:%.2f \n\n", nome, n1, n2, n3,(n1+n2+n3)/3);
    }
    fclose(arquivo);
}
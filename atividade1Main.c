/************************************************
*                     MAIN                      *
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int menu(int);//protótipo

/*Variável da main*/

int esc=1, esc2;

/*Corpo do código, parte que vai comandar a execução*/
int main(void){
     setlocale(LC_ALL,"portuguese");
     
     while(esc != 4){
         esc = menu(esc);
         puts("Tem certeza que deseja encerrar o programa?\n1-Sim\n2-Não\n");
         scanf("%i", &esc2);
         while(esc2 < 1 || esc2 > 2){
             puts("Escolha inválida\nVocê quer voltar para o menu?\n1-Sim\n2-Não\n");
             scanf("%i", &esc2);
            }
         if (esc2 == 2){
             esc = 1;   
            }
         else {
             esc = 4;
            }

     puts("Obrigado por utilizar o software do Felipe Costa :D");               
     return 0;
     }
}


/***********************************************
*                     FRONT                    *
************************************************/


/*Função menu que direciona qual a funcionalidade do programa o usuário vai querer usar*/


int menu(int){
 
 while(esc != 4){
     puts("\nVocê está no programa da atividade da aula 1 de Algoritmos e programação estruturada.\n");
     puts("O que você deseja fazer?\n1-Descobrir a porcentagem de lucro da mercadoria\n2-Calcular a área de um círculo através do raio\n3-Calcular a quantidade de latas de tinta para pintar uma parede\n4-Sair do programa");
     scanf("%i", &esc);
     while(esc < 1 || esc > 4){
         puts("\nAlternatíva inválida.\n");
         puts("O que você deseja fazer?\n1-Descobrir a porcentagem de lucro da mercadoria\n2-Calcular a área de um círculo através do raio\n3-Calcular a quantidade de latas de tinta para pintar uma parede\n4-Sair do programa");
         scanf("%i", &esc);
        }

     switch(esc){
         case 1:
             lucro(esc);
             //system("pause");
             break;
         case 2:
             raio(esc);
             //system("pause");
             break; 
         case 3:
             latas(esc);
             //system("pause");
             break;
        }
    }
} 



/************************************************
*                     BACK                      *
*************************************************/



/*Função que calcula o lucro (Atividade 1)*/

void lucro(int){
    
    float frete,despesas,custo,valor_total,valor_venda,porcentagem_lucro;
    
    
    puts("\nVocê entrou na função de calcular a porcentagem de lucro de certo produto.\nDigite o custo da mercadoria (Sem frete nem despesas adicionais)\n");
    scanf("%f", &custo);
    puts("Agora digite o valor do frete e as despesas adicionais:\n");
    scanf("%f%f", &frete, &despesas);
    valor_total = (custo + frete + despesas);
    //printf("\nValor total: %.2f", valor_total);
    puts("\nDigite o valor de venda desse produto:\n");
    scanf("%f", &valor_venda);
    porcentagem_lucro = ((valor_venda / valor_total) - 1) * 100;
    printf("\nA porcentagem de lucro quevocê conseguiu nessa mercadoria foi de: %.2f%%\n",porcentagem_lucro); 

}

/*Função que calcula o raio (Atividade 2)*/

void raio(int){
    int raio;
    float area;

    puts("\nVocê entrou na função para calcular a área do círculo.\nQual o raio do circulo que você quer calcular a área?");
    scanf("%i", &raio);
    area = (3.1416 * raio * raio);
    printf("\nA área do circulo com raio %i é %.2f",raio,area);
}

/*Função que calcula a quantidade de tintas (Atividade 3)*/

void latas(int){
    float altura,largura,qtd_latas,qtd_tinta_ml;
    int qtd_latas_int;
    
    puts("\nVocê entrou na função para calcular a quantidade de latas de tinta necessárias para pintar uma parede.\nDigite a medida da altura e da largura da parede (Em Metros)");
    scanf("%f%f",&altura,&largura);
    qtd_tinta_ml = (altura * largura) * 300;
    qtd_latas = qtd_tinta_ml / 2000;
    qtd_latas_int = qtd_latas;
    if((qtd_latas-qtd_latas_int > 0)){
         puts("Não deu um resultado inteiro, por isso a quantidade de latas foi arredondada para cima.");
         printf("\nQuantidade de latas necessárias: %i",qtd_latas_int+1);
    }
    else{
         puts("Deu um resultado inteiro, se não houver desperdícios a quantidade de latas vai dar certinho.");
         printf("\nQuantidade de latas necessárias:%i",qtd_latas_int);
    }

}



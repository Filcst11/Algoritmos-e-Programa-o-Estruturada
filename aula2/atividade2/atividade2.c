/**************************************************************************
*Neste arquivo farei a atividade 2 de Algoritmos e programação estruturada*
***************************************************************************/

#include<math.h>
#include <stdio.h>
#include <locale.h>

/*Variáveis*/

int escolha;

/*Protótipos das Funções*/

int menu(int);
void retangulo(void);
void idade(void);
void salario(void);
void carro(void);
void salario_vendedor(void);
void media(void);
void baskara(void);


/*Código Principal*/

int main(void){
     setlocale(LC_ALL,"");
     escolha = 1;
     while (escolha != 11){
        escolha=menu(escolha);
    }
    puts("\n\nObrigado por utilizar o programa do Felipe Costa\n");
    return 0;

}


/*__________________-Funções_____________________-*/

//MENU : Apresenta ao usuário as funcionalidades do sistema e o direciona para as outras funções através da variável "escolha" 

int menu(int){
     
     puts("\n___________________Você está no menu do programa_________________");
     puts("Qual função você deseja entrar?\n4-Calcular a área de um retângulo\n5-Transformar a idade de uma pessoa de (anos meses e dias) para (dias)\n6-Calcular o novo salário de um funcionário baseado no salário atual e o reajuste\n7-Calcular o custo final de um carro baseado no custo de fábrica\n8-Calcular o salário final do vendedor\n9-Calcular a média ponderada final de um aluno baseado nas 3 notas dele\n10-Calcular a formula de báscara \n11-Sair do programa");
     scanf("%i", &escolha);
     
     while(escolha <4 || escolha >11){
         puts("\nEscolha inválida\n");
         puts("Qual função você deseja entrar?\n4-Calcular a área de um retângulo\n5-Transformar a idade de uma pessoa de (anos meses e dias) para (dias)\n6-Calcular o novo salário de um funcionário baseado no salário atual e o reajuste\n7-Calcular o custo final de um carro baseado no custo de fábrica\n8-Calcular o salário final do vendedor\n9-Calcular a média ponderada final de um aluno baseado nas 3 notas dele\n10-Calcular a formula de báscara \n11-Sair do programa");
         scanf("%i", &escolha);
        }

     switch(escolha){
          case 4:
              retangulo();
              break;
          case 5:
              idade();
              break;
          case 6:
              salario();          
              break;
          case 7:
              carro();
              break;
          case 8:
              salario_vendedor();
              break;
          case 9:
              media();
              break;
          case 10:
              baskara();
              break;
          case 11:
              puts("\nSaindo do Programa");
            return escolha;               
        }
        

}



//RETANGULO : Função destinada para sanar os requisitos da "atividade 4" (4. Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo)

void retangulo(void){

      float base,altura;     
      
      puts("\nVocê está na função que calcula a área de um retângulo\nDigite o tamanho da base do retângulo:");
      scanf("%f", &base);
      puts("\nAgora digite a altura deste retângulo (na mesma unidade de medida que você informou a base)");
      scanf("%f", &altura);
      printf("O retângulo com base %.2fu e altura %.2fu possui área igual a %.2fu²\n\n",base,altura,(base * altura));

}

//IDADE : Função destinada para sanar os requisitos da "atividade 5" (5. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias)

void idade(void){
      int anos,meses,dias;
      
      puts("\nVocê está na função que calcula a idade de uma pessoa em dias baseado na idade desta pessoa dada em anos meses e dias.\n(exemplo: Maria tem 12 anos, 3 meses e 8 dias, logo Maria tem 4478 dias de idade)");
      puts("\nQuantos anos a pessoa tem?");
      scanf("%i", &anos);
      puts("Quantos meses?");
      scanf("%i", &meses);
      puts("Quantos dias?");
      scanf("%i", &dias);
      printf("A idade dessa pessoa que possui %i anos, %i meses e %i dias é %i dias de vida\n\n",anos,meses,dias,(anos * 365) + (meses * 30) + dias);

}

//SALARIO : Função destinada para sanar os requisitos da "atividade 6" (6. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário)

void salario(void){
      
      float salario,reajuste;

      puts("\nVocê está na função que solicita o  valor do salário atual de um funcionário e o percentual de reajuste para calcular o valor do novo salário.");
      puts("\nEscreva o salário atual do funcionário:");
      scanf("%f", &salario);
      puts("\nAgora escreva o percentual do reajuste (no formato -XX ou +XX em porcentagem)");
      scanf("%f", &reajuste);

      printf("O funcionário que recebia R$%.2f e sofreu um reajuste de %.2f%% vai passar a receber: RS%.2f\n\n",salario,reajuste, salario * ((reajuste / 100) + 1));


}

//CARRO : Função destinada para sanar os requisitos da "atividade 7" (7. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor)

void carro(void){
     float custo_fabrica;
     const float percentual_distribuidor = 0.28, impostos = 0.45;

     puts("\nVocê está na função que recebe o custo de fárica de um carro e calcula o custo final para o cliente na compra desse carro através do percentual do distribuidor e dos impostos");
     puts("\nQual o custo de fábrica do carro?");
     scanf("%f", &custo_fabrica);
     printf("\nO preço final para o cliente comprando um carro de custo de fabrica igual a R$%.2f, após receber os impostos e taxas do distribuidor é R$%.2f\n\n",custo_fabrica, (custo_fabrica * (1+percentual_distribuidor)) * (1 + impostos));

}

//SALARIO_VENDEDOR : Função destinada para sanar os requisitos da "atividade 8" (8. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor) (salario = fixo + (x * numero de carros) + (0.05 * valor das vendas)

void salario_vendedor(void){
     int carros;
     float valor_vendas, salario_fixo, valor_por_carro;

     puts("\nVocê está na função que calcula o salário final do vendedor a partir da quantidade de carros vendidos por ele, o valor total das vendas dele, o seu salário fixo e o valor que ele recebe por carro vendido.");
     puts("\nDigite a quantidade de carros que ele vendeu.");
     scanf("%i", &carros);
     puts("\nAgora digite o valor total de suas vendas.");
     scanf("%f", &valor_vendas);
     puts("\nAgora digite o salário fixo dele.");
     scanf("%f", &salario_fixo);
     puts("\nPor fim, digite o valo que ele recebe por carro vendido");
     scanf("%f", &valor_por_carro);

     printf("\nO salário final do funcionário que vendeu %i carros, possui R$%.2f como valor total de suas vendas, possui R$%.2f como salário fixo, é de R$%.2f\n\n", carros, valor_vendas, salario_fixo, salario_fixo + (carros * valor_por_carro) + (0.05 * valor_vendas));

}

//MEDIA : Função destinada para sanar os requisitos da "atividade 9" (9. Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5)

void media(void){
    float n1,n2,n3;

    puts("\nVocê está na função que coleta as notas 1, 2 e 3 de um aluno e calcula a média poderada");
    puts("\nDigite a nota 1:");
    scanf("%f", &n1);
    puts("\nDigite a nota 2:");
    scanf("%f", &n2);
    puts("\nDigite a nota 3:");
    scanf("%f", &n3);

    printf("\nA média final do aluno que recebeu as notas %.2f, %.2f e %.2f é %.2f\n\n",n1, n2, n3, ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10);
     

}

//BASCARA : Função destinada para sanar os requisitos do "DESAFIO BÁSKARA" (Desafio Báskara: Faça um programa que calcule o báskara).

void baskara(void){
    float a, b, c, baskara_mais, baskara_menos; 
    double raiz_delta, delta;

    puts("\nVocê está na função que calcula o báskara de uma função quadrática");
    puts("\nDado o modelo:\nF(x) = A.x² + B.x + C\nDigite o número correspondente a variável 'A'");
    scanf("%f", &a);
    puts("\nDigite o número correspondente a variável 'B'");
    scanf("%f", &b);
    puts("\nDigite o número correspondente a variável 'C'");
    scanf("%f", &c);
    delta = ((b*b) - (4 * a *c));   
    raiz_delta=sqrt(delta);
    baskara_mais = ((b * (-1)) + raiz_delta) / (2 * a);
    baskara_menos = ((b * (-1)) - raiz_delta) / (2 * a);

    printf("\nPara a função quadrática F(x) = %.1f.x² + %.1f.x + %.1f\nApós fazer o baskara, temos x = %.2f e x' = %.2f\n\n", a, b, c, baskara_mais, baskara_menos);    
    
}

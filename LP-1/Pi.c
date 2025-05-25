#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void PI(float segundos){
    /*Inicializa o Relógio*/
    clock_t start = clock();

    /*Semente para números aleatórios*/
    srand(time(NULL));

    /*Variáveis Locais*/
    float relogio = 0;
    int contc = 0;
    int contq = 0;
    int cont = 0;
    float pi;
    float porcentagem;

    /*Looping para Gerar os números aleatórios*/
    while(segundos >= relogio){
        /*Gerar Números Aleatórios*/
        float random = ((float)rand() / RAND_MAX) * 99.0f + 1.0f;

        /*Analisa se o Numero Gerado Está Dentro do Círculo o do Quadrado*/
        if(random >= 1 && random <= 78.50){
            ++contc;
        }
        else if(random > 78.50 && random <= 100){
            ++contq;
        }

        /*Dá o valor do Cronometro a variavel relógio(Permite o fim do looping)*/
        relogio = (float)(clock() - start) / CLOCKS_PER_SEC;
    }
    /*debug*/
    printf("%d\n", contc);
    printf("%d\n", contq);

    /*Calcula o Valor de PI*/
    cont = contc + contq;
    porcentagem = (float)contc/cont;
    pi = porcentagem * 4;

    /*Imprimir os Resultados*/
    printf("O Valor de PI é %f\n", pi);
    printf("O Tempo de Execução foi de %f segundos\n", relogio);
    printf("O Número de Tentativas foi de %d\n", cont);
    printf("O Número de Tentativas Dentro do Círculo foi de %d\n", contc);
    printf("O Número de Tentativas Dentro do Quadrado foi de %d\n", contq);
    printf("A Porcentagem de Tentativas Dentro do Círculo foi de %f\n", porcentagem);
}


int main(){
    /*Variáveis Locais*/
    float segundos;

    /*Escanear Segundos*/
    printf("Digite a Quantidade de Tempo Desejada Para o Looping da Função\n");
    scanf("%f", &segundos);

    /*Chamar a Função */
    PI(segundos);

    /*Termina a Contagem do Relógio*/
    clock_t end = clock();

    /*Fim do Programa*/
    return 0;
}
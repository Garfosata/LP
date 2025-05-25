#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num(int a, int b, int c, int d, int e, int f){
    /*Variáveis locais*/
    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, contador = 0;

    /*Inicializa contagem*/
    srand(time(NULL));

    /*loop para analisar os valores*/
    while(i != a || j != b || k != c || l != d || m != e || n != f){
        /*Gera números aleatórios*/
        i = rand() % 60 + 1;
        j = rand() % 60 + 1;
        k = rand() % 60 + 1;
        l = rand() % 60 + 1;
        m = rand() % 60 + 1;
        n = rand() % 60 + 1;

        /*Incrementa o contador*/
        ++contador;
    }

    /*Exibe os números*/
    printf("Os números sorteados foram: %d, %d, %d, %d, %d, %d\n", i, j, k, l, m, n);
   
    /*Exibe a contagem*/
    printf("Foram necessários %d sorteios para encontrar os números desejados.\n", contador);
}

int main(){
    /*Variáveis locais*/
    int a, b, c, d, e, f;

    /*Escanear variáveis*/
    printf("Digite o valor dos numeros desejados:\n");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    /*Chamar funçao*/
    num(a, b, c, d, e, f);

    return 0;
}


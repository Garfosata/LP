#include <stdio.h>

void gasolina(){
    /*Parte 1: Cálculo da Porcentagem do Álcool*/
    /*Variáveis Locais*/
    float gas;
    float etanol;
    float GNV;
    float porcento;
    int escolhas;

    /*Perguntar Se GNV ou Diesel*/
    printf("Escolha (1) Para GNV, ou (2) Para Diesel:\n ");
    scanf("%d", &escolhas);

    /*Switch*/
    switch (escolhas)
    {
    case 1:
        /*Escanear Preços*/
        printf("\nDigite o Preço da Gasolina: ");
        scanf("\n%f", &gas);

        printf("\nDigite o Preço do GNV: ");
        scanf("\n%f", &GNV);

        /*Calculo de Porcentagem do GNV em Relação a Gasolina*/
        porcento = ((gas * 100) / GNV);

        
        /*Imprimir Resultado*/
        printf("\nO Preço da Gasolina Representa %.2f%% do Preço do GNV\n", porcento);

        /*Ver se Vale a Pena*/
        if(porcento <= 83){
            printf("\nVale a Pena Abastercer o Automovel com GNV\n");
        }
        else{
            printf("\nNão Vale a Pena Abastercer o Automovel com GNV\n");
        }
        break;
    
    case 2:
        /*Escanear Preços*/
        printf("\nDigite o Preço da Gasolina: ");
        scanf("\n%f", &gas);

        printf("\nDigite o Preço do Etanol: ");
        scanf("\n%f", &etanol);

        /*Cálculo de Porcentagem do Diesel em Relação a Gasolina*/
        porcento = ((etanol * 100) / gas);

        
        /*Imprimir Resultado*/
        printf("\nO Preço do Etanol Representa %.2f%% do Preço da Gasolina\n", porcento);

        /*Ver se Vale a Pena*/
        if(porcento <= 70){
            printf("\nVale a Pena Abastercer o Automovel com Etanol\n");
        }
        else{
            printf("\nNão Vale a Pena Abastercer o Automovel com Etanol\n");
        }
        break;

    default:
        printf("Nenhuma Entrada Válida...\n");
        break;
    }


}

void carro(){
    /*Quilometragem Específica Para Cada Carro*/
    /*Variáveis Locais*/
    int caso;
    float consmobi;
    float consstyle;

    /*Escanear Caso*/
    printf("\nEscolha um dos Casos\n");
    printf("\nFiat Mobi Like 1.0-8V-(1)\nPEUGEOT 208 STYLE MT 1.0-6V-(2)\n\n");

    scanf("\n%i", &caso);

    switch (caso)
    {
    case 1:
        /* MOBI*/
        consmobi = ((9.6 * 100) / 13.5);
        printf("\nA Quilometragem do Etanol Representa %.2f%% da Quilometragem da Gasolina\n", consmobi);
    
        /*Vale a Pena?*/
        if(consmobi <= 70){
            printf("\nVale a Pena Abastecer o Automovel com Etanol\n");
        }
        else{
            printf("\nNão Compensa Abastercer com Etanol\n");
        }

        break;
    
    case 2:
        /*STYLE*/
        consstyle = ((9.6 * 100) / 13.3);
        printf("\nA Quilometragem do Etanol Representa %.2f%% da Quilometragem da Gasolina\n", consstyle);
    
        /*Vale a Pena?*/
        if(consstyle <= 70){
            printf("\nVale a Pena Abastecer o Automovel com Etanol\n");
        }
        else{
            printf("\nNão Compensa Abastercer com Etanol\n");
        }

        break;
        
    default:
        printf("Nenhuma Entrada Válida...\n");
        break;
    }
}

int main(){
    /*Parte 1*/
    /*Chamar Função Gas*/
    gasolina();

    /*Parte 2*/
    /*Chamar Função Carro*/
    carro();

    /*Fim do Programa*/
    return 0;
}
#include <stdio.h>

int main(){

    /*Parte 1: Cálculo da Porcentagem do Álcool*/

    /*Variáveis*/

    float gas;
    float etanol;
    float porcento;

    /*Escanear Preços*/

    printf("\nDigite o Preço da Gasolina: ");
    scanf("\n%f", &gas);

    printf("\nDigite o Preço do Etanol: ");
    scanf("\n%f", &etanol);

    /*Cálculo*/

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
 
    /*Parte2: Carros Específicos*/

    /*Variáveis*/
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
        printf("\nA Quilometragem do Etanol Representa %.2f%% da Quilometragem da Gasolina", consmobi);
    
        /*Vale a Pena?*/

        if(consmobi <= 70){
            printf("\nVale a Pena Abastecer o Automovel com Etanol");
        }
        else{
            printf("\nNão Compensa Abastercer com Etanol");
        }

        break;
    
    case 2:
        /*STYLE*/

        consstyle = ((9.6 * 100) / 13.3);
        printf("\nA Quilometragem do Etanol Representa %.2f%% da Quilometragem da Gasolina", consstyle);
    
        /*Vale a Pena?*/

        if(consstyle <= 70){
            printf("\nVale a Pena Abastecer o Automovel com Etanol");
        }
        else{
            printf("\nNão Compensa Abastercer com Etanol\n");
        }

        break;
        
    default:
        break;
    }

    return 0;
}
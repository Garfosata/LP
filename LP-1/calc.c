#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("Sem Argumentos Validos...\n");
        return 1;
    }

    float num1 = atof(argv[1]);
    char operador = argv[2][0];
    float num2 = atof(argv[3]);
    float resultado;

    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        if(num2 == 0){
            printf("Divisão Por Zero é uma Indefinição\n");
            return 1;
        }

        resultado = num1 / num2;
        break;
    default:
        printf("Operador inválido. Use +, -, * ou /\n");
        return 1;
        break;
    }
    printf("%f\n", resultado);
    return 0;
}
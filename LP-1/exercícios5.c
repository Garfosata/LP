/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    //Variáveis
    int escolhas = 0;
    int cont = 0;
    //Atividades
    
    //Interface
    printf ("Escolha um caso de 1 a 5\n Caso 1: Numeros de 0 - 10.000\n Caso 2: Numeros de -10.000 - 10.000\n Caso 3: Numeros pares de 0 - 10.000\n Caso 4: Numeros ímpares de 0 - 10.000\n Caso 5: Contagem intercalada de -100.000 - 100.000\n");
    printf (" Caso ");
    scanf ("%i", &escolhas);
    
    //Casos
    switch (escolhas){
        
        case 1:
        for (int i = 0; i < 10000; i++){
            printf ("%i\n", i);
            cont ++;
        }
        printf ("Valor de cont: %i\n", cont);
        break;
        
        case 2:
        for (int i = -10000; i < 10000; i++){
            printf ("%i\n", i);
            cont ++;
        }
        printf ("Valor de cont: %i\n", cont);
        break;
        
        case 3:
        for (int i = 0; i < 10000; i += 2 ){
            printf ("%i\n", i);
            cont ++;
        }
        printf ("Valor de cont: %i\n", cont);
        break;
        
        case 4:
        for (int i = 1; i < 10000; i += 2){
            printf ("%i\n", i);
            cont ++;
        }
        printf ("Valor de cont: %i\n", cont);
        break;
        
        case 5:
        for (int i = -100000; i < 100000; i += 3){
            printf ("%i\n", i);
            cont ++;
        }
        printf ("Valor de cont: %i\n", cont);
        break;
        
    }
    return 0;
}
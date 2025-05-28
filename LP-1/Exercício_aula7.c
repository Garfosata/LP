#include <stdbool.h>

int main()
{
//atividade
    //inteiro
    int positivo = 2147483647; 
    int negativo = -2147483648; 
    
    printf ("Int:\n");
    printf ("Máximo: %i\n", positivo);
    printf ("Mínimo: %i\n\n", negativo);
    
    positivo ++;
    negativo --;
    
    printf ("Máximo +1: %i\n", positivo);
    printf ("Mínimo -1: %i\n", negativo);
    
    printf ("bytes: %li\n\n", sizeof(positivo));
    
    //Short Int
    short int positivo2 = 32767;
    short int negativo2 = -32768;
    
    printf ("Short Int:\n");
    printf ("Máximo: %i\n", positivo2);
    printf ("Mínimo: %i\n\n", negativo2);
    
    positivo2 ++;
    negativo2--;
    
    printf ("Máximo +1: %i\n", positivo2);
    printf ("Mínimo -1: %i\n", negativo2);
    
    printf ("bytes: %li\n\n", sizeof(positivo2));
    
    //Long Int
    long int positivo3 = 2147483647;
    long int negativo3 = -2147483648;
    
    printf ("Short Int:\n");
    printf ("Máximo: %li\n", positivo3);
    printf ("Mínimo: %li\n\n", negativo3);
    
    positivo3 ++;
    negativo3--;
    
    printf ("Máximo +1: %li\n", positivo3);
    printf ("Mínimo -1: %li\n", negativo3);
    
    printf ("bytes: %li\n\n", sizeof(positivo3));
    
    //char
    
    char a;
    
    printf ("char: a\n");
    printf ("bytes: %li\n\n", sizeof(a));
    
    //float
    
    float positivo4 = 1038;
    
    printf ("float:");
    printf (" %f\n", positivo4);
    printf ("bytes: %li\n\n", sizeof(positivo4));
    
    //float
    
    double positivo5 = 1038;
    
    printf ("double:");
    printf (" %f\n", positivo4);
    printf ("bytes: %li\n\n", sizeof(positivo5));
    
    //bool
    
    bool positivo6 = 1;
    bool negativo7 = 0;
    
    printf("bool: %li byte\n", sizeof(positivo6));
}
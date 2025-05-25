/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//exercício aula 4
    //Variáveis
    float peso = .0;
    float altura = .0;
    float imc = .0;
    
    //Interface
    printf ("Entre seu peso: ");
    scanf ("%f", &peso);
    
    printf ("Entre sua altura: ");
    scanf ("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf ("Seu peso é: %.2fkg e sua altura é: %.2fm\n ", peso, altura);
    printf ("Seu IMC = %3.2f\n", imc);
    
    //int num
    int num = 0;
    
    if (imc < 18.50)
    {
        num = 1;
    }
   
    else if (imc >= 18.50 && imc < 25)
    {
        num = 2;
    }
    
    else if (imc >= 25 && imc < 30)
    {
        num = 3;
    }
    
    else if (imc >= 30 && imc < 35)
    {
        num = 4;
    }
    
    else if (imc >= 40)
    {
        num = 5;
    }
    //Switch 
    
    switch (num)
    {
        case 1:
           printf ("Classificação IMC menor que 18,50 = Magreza");
           break;
    
        case 2:
            printf ("Classficação IMC entre 18.50 e 25 = Peso Normal");
            break;
        
        case 3:
            printf ("Classificação IMC entre 25 e 30 = sobre peso");
            break;
            
        case 4:
            printf ("Classificação IMC entre 30 e 40 = obesidade");
            break;
            
        case 5:
            printf ("Classificação IMC maior que 40 = Obesidade Grave");
            break;
    }
    return 0;
}
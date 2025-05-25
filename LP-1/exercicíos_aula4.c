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
    
    //IFs e Elses
    if (imc < 18.50)
    {
        printf ("Classificação  IMC <18,50 = Magreza\n");
    }
   
    else if (imc >= 18.50 && imc < 30)
    {
        printf ("Classificação IMC entre 18,50 e 25 = Peso Normal");
    }
    
     else if (imc >= 25 && imc < 30)
    {
        printf ("Classificação IMC entre 25 e 30 = Sobre Peso");
    }
    
     else if (imc >= 30 && imc < 40)
    {
        printf ("Classificação IMC entre 30 e 40 = Obesidade");
    }
    
    else
    {
        printf ("Classificação IMC maior que 40 = Obesidade grave");
    }
    
    return 0;
}
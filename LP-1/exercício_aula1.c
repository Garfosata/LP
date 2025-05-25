/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int num1 = 20;
    int num2 = 50;
    int num3 = 2;
    int num4 = 3;
    int num5 = 23;
    int num6 = 11;
    int num7 = 22;
    int num8 = 13;
    
    printf("\n\t%i\n", num1 * num4 + num2 / num3);
    printf("\n\t%i\n", (num1 * num4) + num2 / num3);
    printf("\n\t%i\n", num1 * (num4 + num2) / num3);
    printf("\n\t%i\n", num1 * num4 + (num2 / num3));
    printf("\n\t%i\n", (num1 * num4 + num2 / num3) % num5);
    printf("\n\t%i\n", (num1 * num4 + num2 / num3) - num5);
    printf("\n\t%i\n", (num1 * num4 + num2 / num3) + num5);
    printf("\n\t%i\n", (num1 * num4 + num2 / num3) * num5);
    printf("\n\t%i\n", (num1 * num4 + num2 / num3) / num5);
    printf("\n\t%i\n", (num1 * num4++ + num2-- / num3) + num6 / num5 + (num7 * num8));
    
    return 0;
}
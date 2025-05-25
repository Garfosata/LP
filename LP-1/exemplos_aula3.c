/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
//Exemplo 1
    int var1;
    var1 = 0;
    
    printf("Variável inteiro: %i\n", var1);

//Exemplo 2
    int var2 = 0;
    var2 = 100;
    
    printf("Variável inteiro: %i\n", var2);
    
//Exemplo 3
    int var3 = 0;
    var3 = 100 + 200;
    
    printf("Variável inteiro: %i\n", var3);
    
//Exemplo 4
    int var4 = 0;
    
    var4 = 100;
    
    var4 = var4 + 200;
    
    printf("Variável inteiro: %i\n", var4);
    
//Exemplo 5
    int var5 = 0;
    
    var5 = 100;
    
    var5 += 200;
    
    printf("Variável inteiro: %i\n", var5);
    
//Exemplo 6
    int var6 = 0;
    
    var6 = 100;
    
    var6++;
    
    printf("Variável inteiro: %i\n", var6);
    
//Exemplo 7
    int var7 = 0;
    
    var7 = 100;
    
    printf("Variável inteiro: %i\n", var7++);
    
//Exemplo 9
    int var8 = 0;
    
    var8 = 100;
    
    printf("Variável inteiro: %i\n", var8++);
    printf("Variável inteiro: %i\n", var8);
    
//Exemplo 9
    int var9 = 0;
    
    var9 = 100;
    
    printf("Variável inteiro: %i\n", ++var9);
    
//Exemplo 10
    int var10 = 0;
    
    var10 = 100;
    
    var10++;
    
    printf("Variável inteiro: %li bytes\n", sizeof(var10));
    
//Exemplo 11
    int var11 = 100;
    int var12 = 200;
    
    var11 = var11 + var12;
    
    printf("Variável inteiro: %i\n", var11);
    
//Exemplo 12
    int var13 = 0;
    int var14 = 0, resp = 0;
    
    var13 = 100;
    var14 = 200;
    
    resp = var13 + var14;
    
    printf("Variável inteiro: %i\n", resp);

    
    return 0;
}

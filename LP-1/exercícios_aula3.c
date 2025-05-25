/******************************************************************************

    int.
    Float.
    Double.
    Char.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variável Int
	int var1 = 0;
	int var2 = 0, resp = 0;

	var1 = 10;
	var2 = 33;

	resp = var1 + var2 / var1;
    
    printf ("Valor Variável: %i\n", resp);
	printf ("Variável inteiro: %li bytes\n", sizeof(resp));
	
	//Variável Float
	float var3 = 0;
	float var4 = 0;
	
	var3 = 10;
	var4 = 33;
	
	float resp1 = 0;
	resp1 = var3 / var4;
	
	printf ("\nValor Variável: %.2f\n", resp1);
	printf ("Variável inteiro: %li bytes\n", sizeof(resp1));
	
	//Variável Double
	
	double var7 = 0;
	double var8 = 0;
	
	var7 = 10;
	var8 = 33;
	
	double resp2 = 0;
	resp2 = ++var7 * var8 + --var7;
	
	printf ("\nValor Variável: %.2lf\n", resp2);
	printf ("Variável inteiro: %li bytes\n", sizeof(resp2));
	
	//Variável Character
	
	char var9[] = "Raphael_Veiga";
	
	printf ("\nValor Variável: %s\n", var9);
	printf ("Variável inteiro: %li bytes\n", sizeof(var9));
	
	return 0;
}
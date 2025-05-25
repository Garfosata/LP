/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Função recursiva
void torreHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mova o disco 1 de %c para %c\n", origem, destino);
        return;
    }
    
    torreHanoi(n - 1, origem, auxiliar, destino);
    printf("Mova o disco %d de %c para %c\n", n, origem, destino);
    torreHanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int numDiscos;
    
    printf("Digite o número de discos: ");
    scanf("%d", &numDiscos);
    
    // Chamada inicial
    torreHanoi(numDiscos, 'A', 'C', 'B');
    
    return 0;
}
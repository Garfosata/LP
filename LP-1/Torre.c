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
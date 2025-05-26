//Folha de Pagamento parte 2

#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioBase; 
    float valorFerias;
    float valorFGTS;
    float valeAlimentacao;
    float salarioBruto;
    float valeTransporte; 
    float inssPatronal;
    float decimoTerceiroMensal;
    float salarioDemissao; 
    float totalFerias; 
    float lucroMensal; 
    float impostoRenda; 
    float salarioLiquido; 
    float decimoTerceiroTotal;
    float valorDemissao;
    int respostaValeTransporte;
    int respostaDemissao; 
    int diasTrabalhados;
    int mesesTrabalhados;

    printf("Folha de Pagamento:\n");

    printf("\nDigite o valor do lucro mensal da empresa: ");
    scanf("%e", &lucroMensal);

    printf("Digite o salário base do trabalhador: ");
    scanf("%e", &salarioBase);

    printf("Digite o valor do vale alimentação oferecido pela empresa: ");
    scanf("%e", &valeAlimentacao);

    printf("O trabalhador aceitou vale transporte?\n(Digite 1 para sim e 2 para não): ");
    scanf("%i", &respostaValeTransporte);

    if(respostaValeTransporte == 1) {
        valeTransporte = salarioBase * 6 / 100;
        printf("O valor do vale transporte é R$%.2f.\n", valeTransporte);
    }
    else {
        valeTransporte = 0;
    }

    // Cálculo do IRPJ
    impostoRenda = lucroMensal * 15 / 100;
    printf("\nO valor do IRPJ é %.2f.\n", impostoRenda);

    // Cálculo do Salário bruto
    salarioBruto = salarioBase + valeAlimentacao + valeTransporte;
    printf("\nO salário bruto do trabalhador será R$%.2f.\n", salarioBruto);

    // Cálculo das Férias
    valorFerias = salarioBase / 12 + ((salarioBase / 3) / 12);
    printf("\nO valor mensal a separar para as férias do trabalhador é %.2f.\n", valorFerias);

    // Cálculo do Décimo terceiro
    decimoTerceiroMensal = salarioBase / 12;
    printf("\nO valor mensal a separar para o décimo terceiro salário é %.2f.\n", decimoTerceiroMensal);

    // Cálculo do INSS Patronal
    inssPatronal = salarioBase * 20 / 100;
    printf("\nO valor do INSS patronal é %.2f.\n", inssPatronal);

    // Cálculo do FGTS
    valorFGTS = salarioBase * 8 / 100;
    printf("\nA taxa de FGTS é equivalente a 8%% do salário do trabalhador\n");

    // Cálculo do Valor total
    salarioLiquido = salarioBruto + valorFGTS + inssPatronal + valorFerias + decimoTerceiroMensal;
    printf("\nO valor total da reserva mensal para esse trabalhador é %.2f.\n", salarioLiquido);

    // Em caso de demissão
    printf("\nO trabalhador foi demitido?\n(Digite 1 para sim e 2 para não): ");
    scanf("%i", &respostaDemissao);

    if(respostaDemissao == 1) {
        printf("\nDigite o número de dias trabalhados no mês da demissão: ");
        scanf("%i", &diasTrabalhados);

        printf("\nDigite o número de meses trabalhados no ano da demissão: ");
        scanf("%i", &mesesTrabalhados);

        printf("\nAs seguintes despesas devem ser consideradas.\n");

        salarioDemissao = salarioBase / 24 * diasTrabalhados;
        printf("\nO valor do salário de todos os dias trabalhados do mês da demissão, que, no caso, é igual a %.2f.\n", salarioDemissao);

        totalFerias = salarioBase + (salarioBase / 3);
        printf("\nO valor das férias vencidas e proporcionais mais abono de férias, que, no caso, é igual a %.2f.\n", totalFerias);

        decimoTerceiroTotal = salarioBase / 12 * mesesTrabalhados;
        printf("\nO valor décimo terceiro salário proporcional, que, no caso, é igual a %.2f.\n", decimoTerceiroTotal);
    }
    
    return 0;
}
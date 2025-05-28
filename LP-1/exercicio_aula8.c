#include <stdio.h>

int main()
{
    //Variáveis
    
    float salario0;
    float salario1;
    float salario2;
    float IR;
    float IRpagar;
    float aux;
    float trans;
    float passagem;
    float numdias;
    float passxdias;
    float inss;
    float vale;
    float insspagar;
    float salarioF;
    
    //casos
    float caso1[4] = {2259.21, 2826.65, 3751.05, 4664.68};
    float caso2[4] = {1518, 2793.88, 4190.83, 8157.41};
    
    //interface
    printf ("Indique o valor do seu salário bruto:\n");
    scanf ("%f", &salario0);
    
    printf ("Indique a sua quantidade de dias trabalhados por mês: \n");
    scanf ("%f", &numdias);
    
    printf ("Indique o seu gasto com transporte por dia (ida/volta): \n");
    scanf ("%f", &trans);
    
    aux = salario0 * 0.06;

    salario2 = salario0;
    
    //Porcentagem a ser descontada do salario2 IR
    if (salario2 <= caso1[0]){
        vale = salario0 * 0;
    }
    
    else if (salario2 >= caso1[0] && salario2 < caso1[1]){
        vale = salario0 * 0.12;
    }
    
    else if (salario2 >= caso1[1] && salario2 < caso1[2]){
        vale = salario0 * 0.15;
    }
    
    else if (salario2 >= caso1[2] && salario2 < caso1[3]){
        vale = salario0 * 0.225;
    }
    
    else if (salario2 >= caso1[3]){
        vale = salario0 * 0.275;
    }
    
    IRpagar = vale;
    
    
    
    
    //definir se vale transporte vale a pena
    passxdias = passagem * numdias;
    
    if (passxdias < vale){
        printf ("Não vale a pena aceitar o Vale transporte\n\n");
        vale = 0;
        salario2 = salario0;
    }
    
    else if (passxdias >= vale){
        printf ("\nVale a pena pedir o vale transporte\n\n");
        salario2 = salario0 + vale;
    }
    
    //Porcentagem a ser descontada INSS
    
    if (salario2 < caso2[0]){
        inss = salario2 * 0;
    }
    
    else if (salario2 >= caso2[0] && salario2 < caso2[1]){
        inss = 0.075;
    }
    
    else if (salario2 >= caso2[1] && salario2 < caso2[2]){
        inss = 0.09;
    }
    
    else if (salario2 >= caso2[2] && caso2[3]){
        inss = 0.12;
    }
     
    else if (salario2 > caso2[3]){
        inss = 0.14;
    }
    
    insspagar = salario2 * inss;
    
    //salario liquido
    
    
    salarioF = salario2 - insspagar - IRpagar;
    
    printf ("Você deve pagar:\n\n %.2f de imposto de renda\n\n %.2f de INSS\n\n Seu salário liquido é de %.2f\n\n e seu auxiio transporte é de %.2f.", IRpagar, insspagar, salarioF, aux);

    return 0;
}


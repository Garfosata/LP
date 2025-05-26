#include <stdio.h>
#include <stdlib.h>

/*Função legal bananal*/
void mySoma(int a,int b){
    int resp = 0;
    resp = (a + b);
    printf("%i\n", resp);
}

/*Corpo do programa*/
int main(int argc, char *argv[]){
    if(argc <= 2){
        printf("Sem Argumentos...\n");
        return 1;
    }

    else{
        mySoma(atoi(argv[1]), atoi(argv[2]));
        return 0;
    }
}
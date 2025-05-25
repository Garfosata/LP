#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void tempo(int x){
  
  /*Variavéis*/
  unsigned long int resp = 0;

  /*Função for*/
  for(int i = 0; i <= x; ++i ){
    resp += i;
  }
  
  /*Imprimir resposta*/
  printf("Resp:%ld\n", resp);
}

int main(int argc, char *argv[]){
  
  /*Variavéis*/
  float segundos = 0.0;
  int x;

  /*Pedindo Para Dar um Número Valido Para X*/
  if(argc != 2){
    printf("Sem Argumentos Validos...\n");
    return -1;
  }

  /*Atoi Valor Legal*/
  x = atoi(argv[1]);

  /*Iniciar o Relógio*/
  clock_t start = clock();
  
  /*Puxar a Função*/
  tempo(x);
  
  /*Encerrar a Contagem do Relógio*/
  clock_t end = clock();

  /*Imprimir os Segundos*/
  segundos = (float)(end - start) / CLOCKS_PER_SEC;
  printf("Segundos:%f\n", segundos);

  return 0;
}
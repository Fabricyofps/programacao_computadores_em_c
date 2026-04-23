//Algoritmo para exibir os números primos de entre 1 e 100

#include <stdio.h>

int main()
{
  for(int i = 1; i<=100; ++i){
    int contador = 0;
    for(int j=1; j <= i; j++){
      if(i % j == 0){
        contador++;
      }
    }
    if(contador >0 && contador <= 2){
      printf("O número %i é um número primo!\n", i);
    }
  }
  
  return 0;
}

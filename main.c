//Bibliotecas
#include <stdio.h>

//Função
float radianosgraus(float n){
  return n*57.3;  
}

int main(void) {
//Variáveis
  float rad;
//Recebendo o valor do teclado
  printf("Digite um valor em radiano : ");
  scanf("%f", &rad);

  printf("radianosgraus(%.1f) -> %.1f", rad, radianosgraus(rad));
  
  return 0;
  }

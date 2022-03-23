#include <stdio.h>

float radianosgraus(float n){
  return n*57.3;  
}

int main(void) {
  float rad;
  printf("Digite um valor em radiano : ");
  scanf("%f", &rad);

  printf("radianosgraus(%.1f) -> %.1f", rad, radianosgraus(rad));
  
  return 0;
  }
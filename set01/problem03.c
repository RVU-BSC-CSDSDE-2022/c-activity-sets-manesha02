#include <stdio.h>
int sum_fucn(int a, int b);

int main(void){
  int a,b,sum;
  printf("Enter a number\n");
  scanf("%d", &a);
  printf("Enter a number\n");
  scanf("%d", &b);
  sum = sum_fucn(a,b);
  printf("%d", sum);
  return 0;
}

int sum_fucn(int a,int b){
  int sum;
  sum = a+b;
  return sum;
}
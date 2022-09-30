#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(){
  int n,sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n,sum);
}

int input_n(){
  int x;
  printf("Enter a number");
  scanf("%d", &x);
  return(x);
}

int sum_n_nos(int n){
  n = (n*(n+1))/2;
  return(n);
}

void output(int n, int sum){
  printf("The sum of %d natural number is %d",n,sum);
}
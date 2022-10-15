#include<stdio.h>
#include<math.h>
double input();
double square_root(double n);
void output(double n, double sqrroot);

int main(){
  double n = input();
  double sq = square_root(n);
  output(n,sq);
}

double input(){
  double a;
  printf("Enter a number");
  scanf("%lf", &a);
  return(a);
}

double square_root(double n){
  double x;
  x = sqrt(n);
  return(x);
}

void output(double n, double sqrroot){
  printf("Square root of %.2lf is %.2lf",n,sqrroot);
}
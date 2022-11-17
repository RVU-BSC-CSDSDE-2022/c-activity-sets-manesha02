#include<stdio.h>
#include<math.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main(){
  int x = input();
  float result = borga_X(x);
  output(x,result);
}

int input(){
  int a;
  printf("Enter a number\n");
  scanf("%d", &a);
  return(a);
}

//1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...
float borga_X(int x){
  float sum=0.0,fact = 6.0,c = 1.0;
  int i = 4;
  while(c>0.000001){
    sum = sum+c;
    c = x/fact;
    x = x*x;
    fact = fact*i*(i+1);
    i += 2;
    printf("%f\n",sum);
    printf("%f\n", c);
  }
  return(sum);
}

void output(int x, float result){
  printf("borga(%d) = %2.6lf\n",x,result);
}
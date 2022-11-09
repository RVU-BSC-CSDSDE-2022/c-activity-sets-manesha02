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
  float sum=0.0,fact = 1.0,c = 1.0;
  int i = 1,i1 = 3,a;
  while(c>0.000001){
    for(a = 1;a<=i1;a++){
      fact = fact*a;
    }
    sum = sum+c;
    c = (pow(x,i))/fact;
    printf("%f\n", c);
    i++;
    i1 += 2;
    fact = 1;
  }
  return(sum);
}

void output(int x, float result){
  printf("borga(%d) = %2.6lf\n",x,result);
}
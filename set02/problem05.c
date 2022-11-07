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

float borga_X(int x){
  float sum=0.0,fact = 1;;
  int i = 1,i1 = 3,c = 1,a = 1;
  while(c>0.000001){
    for(a = 1;a<=i1;a++){
      fact = fact*a;
    }
    sum = sum+c;
    c = pow(x,i)/fact;
    i++;
    i1 += 2;
    fact = 1;
  }
  return(c);
}

void output(int x, float result){
  printf("borga(%d) = %2.6lf\n",x,result);
}
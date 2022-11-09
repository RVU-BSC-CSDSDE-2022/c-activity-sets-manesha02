#include<stdio.h>
#include<math.h>
struct camel {
    double radius, height, length, weight;
};
typedef struct camel Camel;

void input(int n, Camel c[n], double *truck_weight);
double find_camel_weight(int n, Camel c[n]);
double compute_total_weight(int n, Camel c[n], double truck_weight);
void output(double total_weight);

int main(){
  int n = 0;
  double trw = 0.0;
  Camel c[n];
  input(n,c, &trw);
  double ttw = compute_total_weight(n,c,ttw);
  output(ttw);
}

void input(int n, Camel c[n], double *truck_weight){
  printf("Enter the number of camels\n");
  scanf("%d\n", &n);
  int i;
  for(i = 0;i<n;i++){
    printf("Enter the height of camel no. %d:\n", i);
    scanf("%.2lf\n", c[i].height);
    printf("Enter the length of camel no. %d:\n", i);
    scanf("%.2lf\n", c[i].length);
    printf("Enter the radius of camel no. %d:\n", i);
    scanf("%.2lf\n", c[i].radius);
  }
  printf("Enter the truck weight\n");
  scanf("%.2lf\n", &*truck_weight);
}

//weight = pi * stomach_radius^3 * sqrt(height * length)
double find_camel_weight(int n, Camel c[n]){
  int i;
  double sum = 0.0,sq = 0.0;
  for(i = 0;i<n;i++){
    sq = sqrt(c[i].height*c[i].length);
    sum = sum +(3.14*pow(c[i].radius,3)*sq);
  }
}

double compute_total_weight(int n, Camel c[n], double truck_weight){
  double sum = find_camel_weight(n,c);
  double total_weight = truck_weight+sum;
  return(total_weight);
}

void output(double total_weight){
  printf("The Total weight of the truck is: %2.6lf\n", total_weight);
}
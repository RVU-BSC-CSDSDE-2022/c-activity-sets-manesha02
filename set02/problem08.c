#include<stdio.h>
#include<math.h>
struct camel {
    float radius, height, length, weight;
};
typedef struct camel Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main(){
  int n = 0;
  float trw = 0.0;
  Camel c[n];
  input(n,c, &trw);
}

void input(int n, Camel c[n], float *truck_weight){
  printf("Enter the number of camels\n");
  scanf("%d", &n);
  int i;
  for(i = 0;i<n;i++){
    printf("Enter the height of camel no. %d:\n", i+1);
    scanf("%f", c[i].height);
    printf("Enter the length of camel no. %d:\n", i+1);
    scanf("%f", c[i].length);
    printf("Enter the radius of camel no. %d:\n", i+1);
    scanf("%f", c[i].radius);
  }
  printf("Enter the truck weight\n");
  scanf("%f", truck_weight);
  find_camel_weight(n,c);
  float ttw = compute_total_weight(n,c,*truck_weight);
  output(ttw);
}

//weight = pi * stomach_radius^3 * sqrt(height * length)
void find_camel_weight(int n, Camel c[n]){
  int i;
  float sq = 0.0;
  for(i = 0;i<n;i++){
    sq = sqrt(c[i].height*c[i].length);
    c[i].weight = (3.14*pow(c[i].radius,3)*sq);
  }
}

float compute_total_weight(int n, Camel c[n], float truck_weight){
  float sum = 0.0;
  int i;
  for(i = 0;i<n;i++){
    sum = sum+c[i].weight;
  }
  float total_weight = truck_weight+sum;
  return(total_weight);
}

void output(float total_weight){
  printf("The Total weight of the truck is: %2.6f\n", total_weight);
}
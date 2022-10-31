#include<stdio.h>
#include<math.h>
struct camel {
	double radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);

int main(){
  Camel c;
  c = input();
  find_weight(&c);
  output(c);
}

Camel input(){
  Camel a;
  printf("Enter radius\n");
  scanf("%lf", &a.radius);
  printf("Enter height\n");
  scanf("%lf", &a.height);
  printf("Enter length\n");
  scanf("%lf", &a.length);
  return(a);
}

void find_weight(Camel *c){
  double s = sqrt(c->height * c->length);
  c->weight = 3.1415 * c->radius * c->radius * c->radius * s;
}

void output(Camel c){
  printf("The weight of the camel with radius: %2.1lf, height: %2.1lf, length: %2.1lf is %2.4lf", c.radius,c.height,c.length,c.weight);
}
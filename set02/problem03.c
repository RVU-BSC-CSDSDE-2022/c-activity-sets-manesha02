#include<stdio.h>
#include<math.h>
struct camel {
	float radius, height, length,weight;
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
  scanf("%f", a.radius);
  printf("Enter height\n");
  scanf("%f", a.height);
  printf("Enter length\n");
  scanf("%f", a.length);
}

void find_weight(Camel *c){
  float s = sqrt(c->height * c->length);
  c->weight = 3.1415 * c->radius * c->radius * c->radius * s;
}

void output(Camel c){
  printf("The weight of the camel with radius: %2.1f, height: %2.1f, length: %2.1f is %2.4f", c.radius,c.height,c.length,c.weight);
}
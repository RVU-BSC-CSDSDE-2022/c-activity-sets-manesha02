#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
  float r,h,l;
  input_camel_details(&r,&h,&l);
  int m = find_mood(r,h,l);
  output(r,h,l,m);
}

void input_camel_details(float *radius, float *height, float *length){
  printf("Enter radius: ");
  scanf("%f", radius);
  printf("Enter height: ");
  scanf("%f", height);
  printf("Enter length: ");
  scanf("%f", length);
}

int find_mood(float radius, float height, float length){
  if(radius<height&&radius<length){
    return(0);
  }
  else if(height<length&&height<radius){
    return(1);
  }
  else{
    return(10);
  }
}

void output(float radius, float height, float length, int mood){
  if(mood == 0){printf("The Camel is Sick");}
  if(mood == 1){printf("The Camel is Happy");}
  if(mood == 10){printf("The Camel is Tense");}
}
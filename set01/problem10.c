#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
  char string1,string2;
  input_two_strings(&string1,&string2);
  
}

void input_two_strings(char *string1, char *string2){
  printf("Enter two strings");
  scanf("%s", *string1);
  scanf("%s", *string2);
}

int stringcompare(char *string1, char *string2){
  
}
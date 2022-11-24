#include<stdio.h>
void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main(){
  char a[100],b[100];
  input_string(a,b);
  int index = sub_str_index(a,b);
  output(a,b,index);
}

void input_string(char *a, char *b){
  printf("Enter the string");
  scanf("%s", a);
  printf("Enter the substring");
  scanf("%s", b);
}

int sub_str_index(char *string, char*substring){
int i,l;
  for(i = 0;substring[i]!='\0';i++){}
  l = i;
  fot(i = 0;string[i]!= '\0';i++){
    if(string[i] == substring[0])
  }
}
#include <stdio.h>

int main(){

  char ch, str[100];

  printf("Enter any Character \n");
  scanf("%c",&ch);
  printf("Entered Character is %c \n", ch);
  printf("Enter any String (up too 100 char) \n");
  scanf("%s", &str);
  printf("Entered String is %s \n", str);

  return 0;
}



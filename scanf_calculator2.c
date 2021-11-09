#include <stdio.h>

int main(void) {
  
  int a,b,c,d;
  int result;

  printf("Type the number you want to calculate : ");
  scanf("%d", &a);
  
  printf("Type the number you want to calculate : ");
  scanf("%d", &b);
  
  printf("Type the number you want to calculate : ");
  scanf("%d", &c);
  
  printf("Type the number you want to calculate : ");
  scanf("%d", &d);

  result = a + b + c + d;
  printf("result is `%d`", result);


}
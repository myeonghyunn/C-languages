#include <stdio.h>

int main(void) {
  
  int a,b;
  int result;
  int k;

  printf("Type The first number you want to calculate : ");
  scanf("%d", &a);
  
  printf("what do you want to do with your number? \n" );
  printf("<1> addition  <2> subtraction  <3> multiplication. <4> division \n");
  scanf("%d", &k);

  printf("Type your Second number : ");
  scanf("%d", &b);

  if(k==1) {
  result = a + b;
  printf("your result is `%d`", result);  
  }

  if(k==2) {
  result = a - b;
  printf("your result is `%d`", result);  
  }

  if(k==3) {
  result = a * b;
  printf("your result is `%d`", result);  
  }

  if(k==4) {
  result = a / b;
  printf("your result is `%d`", result);  
  }

  if(k!=1 && k!=2 && k!=3 && k!=4) {
  printf("We can't calculate your number!");  
  }
  
}
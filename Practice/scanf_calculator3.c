#include <stdio.h>

int main()

{
  int a,b;
  int result;
  char k;

  printf("The frist number you want to calculate :");
  scanf("%d", &a);
  printf("+ - * / ==> ");
  scanf(" %c", &k);
  
  printf("The second number you want to calculate :");
  scanf("%d", &b);

  if (k == '+') {
    result = a + b;
    printf("%d + %d = %d\n",a,b,result);
  }

  if (k == '-') {
    result = a - b;
    printf("%d - %d = %d\n",a,b,result);
  }

  if (k == '*') {
    result = a * b;
    printf("%d * %d = %d\n",a,b,result);
  }

  if (k == '/') {
    result = a / b;
    printf("%d / %d = %d\n",a,b,result);
  }

if (k == '%') {
  if (b != 0) {
    result = a % b;
    printf("%d %% %d = %d\n",a,b,result);
  } else
  printf("We can't calculate your number!");
}
}
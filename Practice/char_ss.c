#include <stdio.h>

int main() 
{
  char ss[11] = "Myeong_Hyun";
  int i;

  ss[6] = '-';

for(i=0; i<11; i++){
  printf("ss[%d] : %c \n",i,ss[i]);
}

printf("array ss : %s \n",ss);
}
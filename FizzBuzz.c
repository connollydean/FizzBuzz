#include <stdio.h>

int main(void)
{

int array = 100;

int i = 0;

for(i = 0; i <= array; i++){
  if(i % 3 == 0)
    printf("Fizz");
  if(i % 5 == 0)
    printf("Buzz");
  if((i % 3 != 0) && (i % 5 != 0))
  printf("%d",i);
  printf("\n");
}
    return 0;
}

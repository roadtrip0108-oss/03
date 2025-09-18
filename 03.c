#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int input_int;
  float input_float;
  
  printf("enter_an_integer: ");
  scanf("%d", &input_int);
  
  printf("enter_an_float: ");
  scanf("%f", &input_float);
  
  printf("integer : %d, float : %f\n", input_int, input_float);
  
  system("PAUSE");	
  return 0;
}

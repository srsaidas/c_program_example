#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
  float celsius, fahrenheit;
  if (argc < 2)
  {
    printf("Not enough number of arguments\n");
    return -1;
  }

  celsius = atof(argv[1]);
  fahrenheit = celsius*9/5+32;
  printf("%g celsius temperature %g fahrenheit \n",celsius,fahrenheit);
}

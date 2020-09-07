/*Write a program that accept the radious of a circle
calculate
  Area
  Perimeter
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
  int radious;
  float area, perimeter;
  if (argc < 2)
  {
    printf("Not enough number of arguments \n");
    return -1;
  }

  radious = atoi(argv[1]);

  area = (float)22/7*radious*radious;
  perimeter = (float)22/7*radious*2;

  printf("Area %g, Perimeter %g of a circle of radious %d \n",area, perimeter, radious );

}

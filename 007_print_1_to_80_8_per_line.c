/*
Write a program to print numbers from 1 to 80 separated by tab, 8 numbers per line
*/


#include <stdio.h>

int main()
{
  int i;
  for (i = 1; i <= 80; i++)
  {
    printf("%2.2d\t", i);
    if(!(i%8))
    printf(" \n");
  }
}

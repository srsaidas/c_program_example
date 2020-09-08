/*
Check for perfectness

a perfect number is  a positive integer that is equal to the sum of its proper divisors.

*/

#include <stdio.h>
int main()
{
  int num, i, sum = 0, temp = 0;

  printf("Enter the number: ");
  scanf("%d", &num);

  temp = num;

  for (i = 1; i * 2 <= num; i++)
  {
    if (!(num%i))
    {
      sum += i;
    }
    if(sum > num)
    break;
  }

  if(sum == num)
  {
    printf("perfect number\n");
  }
  else
  {
    printf("Not a perfect number");
  }
}

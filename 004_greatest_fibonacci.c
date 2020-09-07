#include<stdio.h>

int main()
{
  int n, f1 = 0, f2 = 1, temp;
  printf("Enter n : ");
  scanf("%d", &n);

  while (f2 <= n) {
    temp = f1;
    f1 = f2;
    f2 = temp + f1;
  }
  printf("Greatest fibonaci %d\n", f1);

}

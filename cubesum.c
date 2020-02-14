#include <stdio.h>

int cubesum(int num);

int main()
{
		int num, sum;
		printf("Enter number: ");
		scanf("%d", &num);
		sum = cubesum(num);
		printf("Cube sum is %d\n", sum);
}

int cubesum(int num)
{
		int cube = 1, sum = 0;
		while(num)
		{
				cube = (num%10)*(num%10)*(num%10);
				sum += cube;
				num /=10;
		}
		return sum;
}

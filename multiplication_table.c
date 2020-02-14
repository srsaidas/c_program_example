#include <stdio.h>

//Function declaration
void mult(int num);

int main()
{
		int num;
		printf("Enter the number: ");
		scanf("%d", &num);
		mult(num);
}

void mult(int num)
{
		int i;
		//Multiplication table upto 10
		for(i = 1; i <= 10; i++)
		{
				printf("%3d x%3d = %3d\n", i,num, i*num);
		}
}

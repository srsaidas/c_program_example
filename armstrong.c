#include <stdio.h>
void printArmstrong(int num);
int isArmstrong(int num);
int main()
{
		int num;
		printf("Enter the number: ");
		scanf("%d", &num);
		printArmstrong(num);

}

void printArmstrong(int num)
{
		int i;
		for(i = 1; i <= num; i++ )
		{
				if (!isArmstrong(i))
						printf("%d ", i);
		}
}

int isArmstrong(int num)
{
		int sum=0, cube =1, temp = num;
		while(temp)
		{
				cube = (temp%10)*(temp%10)*(temp%10);
				sum += cube;
				temp /= 10;
		}

		if(sum == num)
				return 0;
		return 1;
}

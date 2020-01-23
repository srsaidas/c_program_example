#include <stdio.h>

int main()
{
		//Variable declaration 
		int n, i;

		// Variable to store largest, second largest and current number 
		int large, second = (1 << sizeof(int) * 8-1), num;

		//prompt to enter numner of data to be entered
		printf("Enter num of elemets");
		scanf("%d", &n);

		printf("Enter numbers: ");
		for (i = 0; i < n ;i++)
		{
			
				scanf("%d", &num);
				if (i == 0)
				{
						large = num;
				}
				else if (num > large)
				{
						second = large;
						large = num;
				}
				else if (num > second)
				{
						second = num;
				}

		}


		printf("Second largest number %d\n", second);

}

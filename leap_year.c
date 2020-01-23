#include <stdio.h>

int main()
{
		int year;
		printf("Enter a year: ");
		scanf("%d", &year);

		
		if (!(year % 400) || !(year % 4) && (year % 100))
				printf("%d is Leap Year\n", year);
		else 
				printf("%d is not leap year\n", year);
}

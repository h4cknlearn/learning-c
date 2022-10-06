#include <stdio.h>

int main(void)
{
	int integer1;
	int integer2;
	// int integer1, integer2; would be the same as above

	printf("Enter first integer\n");
	scanf("%d", &integer1);

	printf("Enter second integer\n");
	scanf("%d", &integer2);

	int sum;
	sum = integer1 + integer2;
	// int sum = integer1 + integer2;

	printf("Sum is %d\n", sum);
	// printf("Sum is %d\n", integer1 + integer2);
	
	// int sum;
	// printf("Sum is %\n", integer1 + integer2); 
}


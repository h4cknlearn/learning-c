#include <stdio.h>

int main(void)
{
	int c; // define variable

	// postincrement
	c = 5; // assign 5 to c
	printf("%d\n", c); // print 5
	printf("%d\n", c++); // print 5 +1
	printf("%d\n\n", c); // print 6


	// demonstrate preincrement
	c = 5; // assign 5 to c
	printf("%d\n", c); // print 5
	printf("%d\n", ++c); // preincrement then print 6
	printf("%d\n", c); // print 6
} 


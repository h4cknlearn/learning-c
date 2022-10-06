/* requires
1 the name of a control variable (or loop counter)
2 the initial value of the control variable
3 the increment or dec by which the control variable is modified each
time through the loop
4 the condition that tests for the final value of control variable */

#include <stdio.h>

int main(void) 
{
	unsigned int counter = 1; // initialization

	while (counter <= 10) { // iteration condition
		printf("%u\n", counter);
		++counter; // increment
	}
}

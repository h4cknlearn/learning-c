#include <stdio.h>

int main(void)
{

	unsigned int passes = 0; // number of passes
	unsigned int failures = 0; // number of failures
	unsigned int student = 1; // student counter
	int result;

	while (student <= 10) {
	
		printf("%s", "Enter result (1=pass, 2=fail): ");
		scanf("%d", &result);

		if (result == 1) {
			passes = passes + 1;
		}
		else {
			failures = failures + 1;
		}

		student = student + 1; // icrement student counter
		}

	printf("Passed %u\n", passes);
	printf("Failed %u\n", failures);

	if (passes > 8) {
		puts("Bonus to instructor!");
	}
}

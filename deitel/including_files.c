// one of the most common uses of the preprocessor is to include another file

#include <stdio.h>

int main(void)
{
	printf("Hello, world!\n");
	return 0;
}

/* the preprocessor replaces the line #include <stdio.h> with the textual content of
 * the file 'stdio.h', which declares the printf() function among other things
 *
 * this can also be written using double quotes #include "stdio.h"
 * if the filename is enclosed within angle brackets, the file is searched for in the standard compiler include paths
 *
 * if the filename is enclosed within double quotes, the search path is expanded to include the current source file directory 
 *
 *
 * this can be introduced through a coomand line flag, which can be parameterized using a makefile, so that a different set of include files can be swapped in for different operating systems

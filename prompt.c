#include <stdio.h>

/* Declare a static buffer for user input of maximum size 2048 */
static char input[2048];

int main(int argc, char** argv)
{
	/* Print Version and Exit Information */
	puts("Liscpy Version 0.0.0.0.1");
	puts("Press ctrl-c to exit\n");
	
	/* Forever */
	while (1) {

		/* Show prompt */
		fputs("liscp> ", stdout);
		
		/* Read input, up to 2048 characters */
		fgets(input, 2048, stdin);
		
		/* Echo input back */
		printf("No, you're the %s", input);

	}
	
	return 0;

}

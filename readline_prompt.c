#include <stdlib.h>
#include <stdio.h>

// If we are compiling on Windows, compile these functions:
#ifdef _WIN32

#include <string.h>

static char buffer[2048];

// Fake readline function
char* readline(char* prompt) 
{
		fputs(prompt, stdout);
		fgets(buffer, 2048, stdin);
		char* cpy = malloc(stlen(buffer) + 1);
		strcpy(cpy, buffer);
		cpy(stlen(cpy) - 1] = '\0';
		return cpy;
}

void add_history(char* unused) { }

// Otherwise, include readline
#else

#include <readline/readline.h>
#include <readline/history.h>

#endif
 
int main() {
    char* input, shell_prompt[100];

	// Version and exit info
	puts("Liscp Version 0.0.0.0.2");
	puts("Press ctrl-c to exit\n");
 
    while(1) {
        // Output prompt
        sprintf(shell_prompt, "liscp> ");
 
        // Display prompt and read input (n.b. input must be freed after use)...
        input = readline(shell_prompt);
 
        // Check for EOF.
        if (!input)
            break;
 
        // Add input to history.
        add_history(input);
 
		// Echo input back to user.
		printf("No, you're the %s!\n", input);
 
        // Free input.
        free(input);
    }
}

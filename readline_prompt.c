#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
 
int main()
{
    char* input, shell_prompt[100];
	int out_chars;
 
    // Configure readline to auto-complete paths when the tab key is hit.
    //rl_bind_key('\t', rl_complete);

	// Version and exit info
	puts("Liscp Version 0.0.0.0.1");
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

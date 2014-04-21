#include <stdio.h>

int main()
{
		int x;

		puts("\nFor loop hello world:");
		for(int i = 0; i <= 4; i++) {
				printf("\t%d: Hello, world!\n", i + 1);
		}
		

		puts("\nWhile loop hello world:");
		x = 0;
		while(x <= 4) {
				x++;
				printf("\t%d: Hello, world!\n", x);
		}

		puts("\nCall function for n hello worlds:");
		hello_n(3);
}

int hello_n(int n) 
{
		if (n > 0) {
				puts("\tHello, world!");
				hello_n(n - 1);
		}
		return 0;
}

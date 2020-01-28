#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of 
one or more blanks by a single blank. */
int main()
{
	int c, previousC;

	previousC = EOF; // can really be any nonblank char

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			// only print the first blank in a series
			if (previousC != ' ') {
				putchar(c);
			}
		}
		else {
			putchar(c);
		}

		previousC = c;
	}

	return 0;
}

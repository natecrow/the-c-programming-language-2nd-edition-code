#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */
int main()
{
	int count, c;

	count = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			++count;
		}
	}

	printf("%d\n", count);

	return 0;
}

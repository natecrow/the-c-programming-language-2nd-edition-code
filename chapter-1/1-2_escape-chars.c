#include <stdio.h>

/* Experiment to find out what happens when printf's argument string contains
 * \c, where c is some character not listed above. */
int main()
{
    printf("\\t: \t\n");
    printf("\\b: \b\n");
    printf("\\\": \"\n");
    printf("\\\\: \\\n");
    printf("\\a: \a\n");
    printf("\\f: \f\n");

    // printf("\\c: \c\n"); // invalid esc sequence

    return 0;
}

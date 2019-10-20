#include <stdio.h>

#define LOWER   0   // lower limit of temperature table
#define UPPER   300 // upper limit
#define STEP    20  // step size

/** 
 * print Fahrenheit-Celsius table
 */
int main()
{
    float fahr, celsius;

    printf("Fahr\tCelsius\n");   // print table heading
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%3.1f\n", fahr, celsius);
    }

    return 0;
}

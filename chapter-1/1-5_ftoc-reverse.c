#include <stdio.h>

/** 
 * print Fahrenheit-Celsius table
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size

    printf("Fahr\tCelsius\n");   // print table heading
    for (fahr = upper; fahr >= lower; fahr -= step) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%3.1f\n", fahr, celsius);
    }

    return 0;
}

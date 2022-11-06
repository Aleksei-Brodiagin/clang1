#include <stdio.h>

/*
fahrenheit
*/

// fahrenheit

int main()
{
    int fahrenheit;
    int celsius;
    int minTemperature;
    int maxTemperature;
    int step;

    minTemperature = 0;
    maxTemperature = 300;
    step = 20;

    fahrenheit = minTemperature;

    while (fahrenheit <= maxTemperature) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%d\t%d\n", fahrenheit, celsius);
        fahrenheit += step;
    }
}

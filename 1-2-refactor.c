#include <stdio.h>

int main()
{
    int minTemperature = 0;
    int maxTemperature = 300;
    int step = 20;
    float fahrenheit = minTemperature;
    float celsius;

    printf("Fahrenheit\n\n");

    while (fahrenheit <= maxTemperature) {
        celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int minTemperature = -20;
    int maxTemperature = 150;
    int step = 20;
    float celsius = minTemperature;
    float fahrenheit;

    printf("Celsius\n\n");

    while (celsius <= maxTemperature) {
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
        celsius += step;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int minTemperature = -20;
    int maxTemperature = 150;
    int step = 20;
    float fahrenheit;
    float celsius;

    printf("Celsius\n\n");

    for (celsius = minTemperature; celsius <= maxTemperature; celsius += step) {
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
    }

    return 0;
}

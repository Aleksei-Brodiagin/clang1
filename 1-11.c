#include <stdio.h>

#define STEP 10
#define MIN_TEMPERATURE -20
#define MAX_TEMPERATURE 150

float convertCelsiusToFahrenheit(float n);

int main()
{
    float fahrenheit;
    float celsius;

    printf("Celsius\n\n");

    for (celsius = MAX_TEMPERATURE; celsius >= MIN_TEMPERATURE; celsius -= STEP) {
        printf("%3.0f %6.1f\n", celsius, convertCelsiusToFahrenheit(celsius));
    }

    return 0;
}

float convertCelsiusToFahrenheit(float celsius)
{
    return celsius * 9.0 / 5.0 + 32.0;
}

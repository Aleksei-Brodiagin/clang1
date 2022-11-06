#include <stdio.h>

#define STEP 10
#define MIN_TEMPERATURE -20
#define MAX_TEMPERATURE 150

int main()
{
    float fahrenheit;
    float celsius;

    printf("Celsius\n\n");

    for (celsius = MAX_TEMPERATURE; celsius >= MIN_TEMPERATURE; celsius -= STEP) {
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
    }

    return 0;
}

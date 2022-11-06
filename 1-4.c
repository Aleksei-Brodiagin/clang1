#include <stdio.h>

int main()
{
    int c;
    int numberOfChars = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        putchar(c);
        numberOfChars++;
    }

    printf("\n");
    printf("Number of chars: %d\n", numberOfChars);
    printf("%d\n", EOF);

    return 0;
}

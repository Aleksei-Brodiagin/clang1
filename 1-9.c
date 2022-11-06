#include <stdio.h>

int main()
{
    int c;
    int size = 0;

    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t') {
            for (int i = size; i > 0; i--) {
                putchar('-');
            }
            putchar('\n');
            size = 0;
        } else {
            size++;
        }
    }

    return 0;
}

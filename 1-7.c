#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != '\n') {
        if (c == '\t') {
            printf("\\t");
            continue;
        }

        if (c == '\b') {
            printf("\\b");
            continue;
        }

        if (c == '\\') {
            printf("\\");
            continue;
        }

        putchar(c);
    }

    putchar('\n');

    return 0;
}

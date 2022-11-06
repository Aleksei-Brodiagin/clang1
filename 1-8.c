#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    bool isNewLine = false;

    while ((c = getchar()) != '\n') {
        if (c == '\t' || c == ' ') {
            if (!isNewLine) {
                putchar('\n');
                isNewLine = true;
            }
        } else {
            putchar(c);
            isNewLine = false;
        }
    }

    putchar('\n');

    return 0;
}

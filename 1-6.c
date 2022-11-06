#include <stdio.h>
#include <stdbool.h>

#define NEW_LINE_CHAR '\n'
#define WHITESPACE_CHAR ' '

int main()
{
    bool isWhitespace = false;
    int c;

    while ((c = getchar()) != NEW_LINE_CHAR) {
        if (isWhitespace && c == WHITESPACE_CHAR) {
            continue;
        }

        isWhitespace = c == WHITESPACE_CHAR;

        putchar(c);
    }

    putchar(NEW_LINE_CHAR);

    return 0;
}

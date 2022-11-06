#include <stdio.h>

int main()
{
    int numberOfWhitespaces = 0;
    int numberofTabs = 0;
    int numberofNewLines = 0;
    int c;

    while((c = getchar()) != EOF) {
        if (c == '\n') {
            numberofNewLines++;
            break;
        }

        if (c == '\t') {
            numberofTabs++;
        }

        if (c == ' ') {
            numberOfWhitespaces++;
        }
    }

    printf("Number 0f whitespaces: %d\n", numberOfWhitespaces);
    printf("Number 0f tabs: %d\n", numberofTabs);
    printf("Number 0f new lines: %d\n", numberofNewLines);

    return 0;
}

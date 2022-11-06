#include <stdio.h>

int main()
{
    int c;
    int ch[1000];

    for (int i = 0; i <= 999; i++) {
        ch[i] = 0;
    }

    while ((c = getchar()) != '\n') {
        ++ch[c];
    }

    for (int i = 0; i <= 999; i++) {
        if (ch[i] != 0) {
            printf("%c - %d\n", i, ch[i]);
        }
    }

    return 0;
}

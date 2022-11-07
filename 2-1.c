#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int max: %d\n", INT_MAX);
    printf("int min: %d\n", INT_MIN);

    printf("unsigned int max: %u\n", UINT_MAX);

    signed char ch = 1;
    signed char prevCh = 0;

    while (ch - 1 == prevCh) {
        ch++;
        prevCh++;
    }

    printf("signed char max: %d\n", prevCh);

    printf("max float: %f\n", FLT_MAX);

    return 0;
}

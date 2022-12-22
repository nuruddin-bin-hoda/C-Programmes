#include <stdio.h>

int main(void)
{
    int i, number = 1000;

    for (i = 1000; i > 0; i--)
    {
        printf("%d\t", i);

        if ((i - 1) % 5 == 0)
            printf("\n");
    }

    return 0;
}
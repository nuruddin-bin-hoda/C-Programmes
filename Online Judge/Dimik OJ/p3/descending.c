#include <stdio.h>

int main(void)
{
    int number = 1000;

    int line = number / 5;

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d\t", number);
            number--;
        }
        printf("\n");
    }

    return 0;
}
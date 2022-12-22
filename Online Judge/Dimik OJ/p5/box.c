#include <stdio.h>

int main(void)
{
    int T, N, i, j;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // take box length
        scanf("%d", &N);

        for (i = 1; i <= N; i++)
        {
            for (j = 1; j <= N; j++)
                printf("*");

            printf("\n");
        }

        if (T != 0)
            printf("\n");
    }

    return 0;
}
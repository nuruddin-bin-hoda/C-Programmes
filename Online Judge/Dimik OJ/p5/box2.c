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

        for (i = 1; i <= N * N; i++)
        {
            printf("*");

            if (i % N == 0)
                printf("\n");
        }

        if (T != 0)
            printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int i, j, T, N;

    // take number of test cases
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        // take input
        scanf("%d", &N);

        printf("Case %d:", i);

        // find the divisor
        for (j = 1; j <= N; j++)
            if (N % j == 0)
                printf(" %d", j);

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, i, j;

        scanf("%d", &n);

        long long int row[n + 1];

        for (i = 0; i <= n; i++)
        {
            row[i] = 1;

            for (j = i - 1; j > 0; j--)
                row[j] = row[j] + row[j - 1];

            for (j = 0; j <= i; j++)
                printf("%lld ", row[j]);

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
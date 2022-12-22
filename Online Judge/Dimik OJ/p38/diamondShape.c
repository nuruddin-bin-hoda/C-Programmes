#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, m, i, j;

        scanf("%d %d", &n, &m);

        // print first half
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("%d", m);

                if (j != i)
                    printf(" ");
            }
            printf("\n");
        }

        // print last lalf
        for (i = n - 1; i > 0; i--)
        {
            for (j = i; j > 0; j--)
            {
                printf("%d", m);

                if (j != 1)
                    printf(" ");
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
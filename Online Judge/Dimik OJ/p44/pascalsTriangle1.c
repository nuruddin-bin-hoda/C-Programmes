#include <stdio.h>

int main(void)
{
    int T, rows, i, j;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &rows);

        int coeff[rows];

        for (i = 0; i <= rows; i++)
        {
            coeff[i] = 1;

            for (j = i - 1; j > 0; j--)
                coeff[j] = coeff[j] + coeff[j - 1];

            for (j = 0; j <= i; j++)
                printf("%d ", coeff[j]);

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
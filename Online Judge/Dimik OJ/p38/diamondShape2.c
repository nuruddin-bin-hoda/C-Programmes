#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, m, i, j, columns;

        scanf("%d %d", &n, &m);

        columns = 1;

        for (i = 1; i < n * 2; i++)
        {
            for (j = 1; j <= columns; j++)
            {
                printf("%d", m);

                if (j != columns)
                    printf(" ");
            }

            if (i < n)
                columns++;
            else
                columns--;

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
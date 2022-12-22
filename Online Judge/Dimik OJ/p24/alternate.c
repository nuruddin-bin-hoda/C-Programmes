#include <stdio.h>

int main(void)
{
    int T, n, i;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &n);

        int arr[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < n; i += 2)
        {
            printf("%d", arr[i]);

            if (i != n - 1 && i + 1 != n - 1)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
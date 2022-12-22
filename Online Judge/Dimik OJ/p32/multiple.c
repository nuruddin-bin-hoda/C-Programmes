#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int X, N, i;

        scanf("%d %d", &X, &N);

        if (X > N)
        {
            printf("Invalid!\n\n");
        }
        else
        {
            for (i = X; i <= N; i += X)
            {
                printf("%d\n", i);
            }

            printf("\n");
        }
    }

    return 0;
}
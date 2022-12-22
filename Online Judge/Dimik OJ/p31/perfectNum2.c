#include <stdio.h>
#include <math.h>

int main(void)
{
    int T, N, i, perfect_num[] = {6, 28, 496, 8128, 33550336};

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);

        for (i = 0; i < 5; i++)
        {
            if (perfect_num[i] <= N)
                printf("%d\n", perfect_num[i]);
        }

        printf("\n");
    }

    return 0;
}
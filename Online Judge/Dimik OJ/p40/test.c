#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int X, K, i, sum, power;

        scanf("%d %d", &X, &K);

        sum = 1;
        power = 1;

        for (i = 1; i <= K; i++)
        {
            power = power * X;
            printf("%d\n", power);
            sum += power;
        }

        printf("Result = %d\n", sum);
    }

    return 0;
}
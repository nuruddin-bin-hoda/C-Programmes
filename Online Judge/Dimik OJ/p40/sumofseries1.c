#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        double X, K, i, sum;

        scanf("%lf %lf", &X, &K);

        sum = 0;

        for (i = 0; i <= K; i++)
        {
            sum = sum + pow(X, i);
        }

        printf("Result = %.0lf\n", sum);
    }

    return 0;
}
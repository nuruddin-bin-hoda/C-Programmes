#include <stdio.h>

int main(void)
{
    int T, N, i;
    long long int factorial;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // teke input
        scanf("%d", &N);

        factorial = 1;

        for (i = N; i > 1; i--)
        {
            factorial *= i;
        }

        printf("%lld\n", factorial);
    }
    return 0;
}
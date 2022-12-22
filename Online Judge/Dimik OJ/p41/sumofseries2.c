#include <stdio.h>

long long int factorial(int n);

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        float i, sum;

        scanf("%d", &n);

        sum = 0;

        for (i = 1; i <= n; i++)
            sum += i / (float)factorial(i);

        printf("%.4f\n", sum);
    }

    return 0;
}

// function to find factorial
long long int factorial(int n)
{
    int i;
    long long int fact;

    fact = 1;

    for (i = 1; i <= n; i++)
        fact *= i;

    return fact;
}
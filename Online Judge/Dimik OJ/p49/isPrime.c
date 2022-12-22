#include <stdio.h>
#include <math.h>

int is_prime(long long int N)
{
    int i, root;

    if (N == 2)
        return 1;

    if (N % 2 == 0)
        return 0;

    root = sqrt(N);

    for (i = 3; i <= root; i += 2)
        if (N % i == 0)
            return 0;

    return 1;
}

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long int N;
        int prime;

        scanf("%lld", &N);

        prime = is_prime(N);

        if (prime)
            printf("%lld is a prime\n", N);
        else
            printf("%lld is not a prime\n", N);
    }

    return 0;
}
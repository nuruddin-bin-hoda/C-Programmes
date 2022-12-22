#include <stdio.h>

int trailing_zeroes(int N);

int main(void)

{
    int T, N, zeroes;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // take input
        scanf("%d", &N);

        zeroes = trailing_zeroes(N);

        printf("%d\n", zeroes);
    }

    return 0;
}

int trailing_zeroes(int N)
{
    int zeroes = 0;

    while (N > 0)
    {
        zeroes = zeroes + N / 5;

        N = N / 5;
    }

    return zeroes;
}
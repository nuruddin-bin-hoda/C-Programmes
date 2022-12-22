#include <stdio.h>

int main(void)
{
    int T, N, MSD, LSD, quotient, sum;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &N);

        // LSD
        LSD = N % 10;

        // MSD
        quotient = N;
        do
        {
            MSD = quotient % 10;
            quotient = quotient / 10;
        } while (quotient);

        // sum of first & last digit
        sum = LSD + MSD;

        printf("Sum = %d", sum);

        if (T != 0)
            printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long int A, B, C, i = 0, diviser;

        scanf("%lld %lld %lld", &A, &B, &C);

        if (A % C == 0)
            diviser = A;
        else
            diviser = A + C - (A % C);

        while (diviser <= B)
        {
            printf("%lld\n", diviser);

            diviser += C;
        }

        printf("\n");
    }

    return 0;
}
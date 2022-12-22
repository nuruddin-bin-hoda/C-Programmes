#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long int A, B, C, diviser = 0, AB = 0;

        scanf("%ld %ld %ld", &A, &B, &C);

        AB = A * B;
        diviser = AB;

        while (diviser <= C)
        {
            printf("%ld\n", diviser);

            diviser += AB;
        }

        printf("\n");
    }

    return 0;
}
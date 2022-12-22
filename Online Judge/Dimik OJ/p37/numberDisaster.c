#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, rev;

        scanf("%d", &N);

        rev = 0;

        while (N != 0)
        {
            rev *= 10;
            rev += N % 10;
            N /= 10;
        }

        printf("%d\n", rev);
    }

    return 0;
}
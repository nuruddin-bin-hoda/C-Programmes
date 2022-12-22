#include <stdio.h>

int mod_pow(int p, int q, int c);

int main(void)
{
    int T, p, q, c;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &p, &q, &c);

        printf("Result = %d\n", mod_pow(p, q, c));
    }

    return 0;
}

int mod_pow(int p, int q, int c)
{
    int i, res = 1;

    for (i = 0; i < q; i++)
        res = (res * p) % c;

    return res;
}
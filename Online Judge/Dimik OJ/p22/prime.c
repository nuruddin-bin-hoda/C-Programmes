#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(void)
{
    int T, numA, numB, i, j, count, flag;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &numA, &numB);

        count = 0;

        for (i = numA; i <= numB; i++)
        {
            if (is_prime(i) == 1)
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}

// test a number is prime or not
int is_prime(int n)
{
    int i, root;

    if (n < 2)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    root = sqrt(n);

    for (i = 3; i <= root; i += 2)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}
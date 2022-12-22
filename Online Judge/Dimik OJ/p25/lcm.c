#include <stdio.h>

// function to find gcd
int GCD(long long int num1, long long int num2)
{
    long long int temp;

    while (num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    return num1;
}

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long int num1, num2, gcd, temp, lcm;

        scanf("%lld %lld", &num1, &num2);

        // find gcd
        gcd = GCD(num1, num2);

        // find lcm
        lcm = (num1 / gcd);
        lcm = lcm * (num2 / gcd) * gcd;

        printf("LCM = %lld\n", lcm);
    }

    return 0;
}
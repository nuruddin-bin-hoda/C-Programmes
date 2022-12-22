#include <stdio.h>

int main(void)
{
    int T;
    long int n;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // take input
        scanf("%d", &n);

        if (n % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
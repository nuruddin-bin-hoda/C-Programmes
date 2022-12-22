#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        char n[101];
        scanf("%s", &n);

        if (n[strlen(n) - 1] % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
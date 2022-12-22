#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int T;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        char str[100000], *p, *e;
        int count = 0;

        // get number as a string
        scanf(" %[^\n]", str);

        for (p = str;; p = e)
        {
            strtol(p, &e, 10);

            if (p == e)
                break;

            count++;
        }

        printf("%d\n", count);
    }
    return 0;
}
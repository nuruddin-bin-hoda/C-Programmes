#include <stdio.h>

int main(void)
{
    int T, n;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // take input
        scanf("%d", &n);

        for (int i = 0;; i++)
        {

            if (i * i == n)
            {
                printf("YES\n");
                break;
            }
            else if (i * i > n)
            {
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}
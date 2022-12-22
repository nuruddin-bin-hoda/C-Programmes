#include <stdio.h>

int main(void)
{
    // take number of test case
    int T;
    scanf("%d", &T);

    // take test cases
    while (T--)
    {
        unsigned long long int num, perfect_num[] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};
        int i, flag = 0;

        scanf("%lld", &num);

        for (i = 0; i < 8; i++)
        {
            if (perfect_num[i] == num)
                flag = 1;
        }

        if (flag)
            printf("YES, %lld is a perfect number!\n", num);
        else
            printf("NO, %lld is not a perfect number!\n", num);
    }

    return 0;
}

// this problem wasn't solved
#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, first_num, last_num, sum;
    char num_str[6];

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // take number as a string
        scanf("%s", num_str);

        // convert string to number
        first_num = num_str[0] - '0';
        last_num = num_str[strlen(num_str) - 1] - '0';

        sum = first_num + last_num;

        printf("Sum = %d", sum);

        if (T != 0)
            printf("\n");
    }

    return 0;
}
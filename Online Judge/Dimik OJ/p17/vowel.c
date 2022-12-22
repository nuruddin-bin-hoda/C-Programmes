#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1002], vowel[6] = {'a', 'e', 'i', 'o', 'u'};
    int T, i, j, count, len;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // take string input
        scanf(" %[^\n]", str);

        len = strlen(str);
        count = 0;

        // count number of vowels
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (str[i] == vowel[j])
                    count++;
            }
        }

        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
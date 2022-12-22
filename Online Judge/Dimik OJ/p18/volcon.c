#include <stdio.h>
#include <string.h>

int main(void)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    char str[10002];
    int T, i, j, len;

    // take number of test cases
    scanf("%d", &T);
    while (T--)
    {
        // take test case
        scanf(" %[^\n]", str);

        len = strlen(str);

        // print vowels
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (str[i] == vowels[j])
                    printf("%c", str[i]);
            }
        }
        printf("\n");

        // print consonants
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < 21; j++)
            {
                if (str[i] == consonants[j])
                    printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}

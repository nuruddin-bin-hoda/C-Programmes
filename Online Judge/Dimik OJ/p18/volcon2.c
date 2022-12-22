#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10001];
    int T, i;

    // take number of test cases
    scanf("%d", &T);
    while (T--)
    {
        // take test case
        scanf(" %[^\n]", str);

        // print vowels
        for (i = 0; i < str[i] != '\0'; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                printf("%c", str[i]);
        }
        printf("\n");

        // print consonants
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != ' ')
                printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}

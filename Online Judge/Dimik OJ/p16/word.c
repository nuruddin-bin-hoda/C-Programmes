#include <stdio.h>
#include <string.h>

void revstr(char *str);

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        // get input
        char str[1001];
        scanf(" %[^\n]", str);

        char *token;
        char *word[1000];
        int i = 0;

        // string to word token
        token = strtok(str, " ");
        while (token != NULL)
        {
            word[i] = token;
            i++;

            token = strtok(NULL, " ");
        }

        // print inverse words
        for (int j = 0; j < i; j++)
        {
            revstr(word[j]);
            printf("%s", word[j]);

            if (j + 1 != i)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

void revstr(char *str)
{
    int i, len, temp;

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, i, j;

        // take number of word
        scanf("%d", &n);

        char word[n][10001], temp[10001];

        // take words
        for (i = 0; i < n; i++)
            scanf(" %[^\n]", &word[i]);

        // sotting words using bubble sort
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(word[i], word[j]) > 0)
                {
                    strcpy(temp, word[i]);
                    strcpy(word[i], word[j]);
                    strcpy(word[j], temp);
                }
            }
        }

        for (i = 0; i < n; i++)
            printf("%s\n", word[i]);
    }

    return 0;
}
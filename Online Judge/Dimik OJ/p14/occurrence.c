#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, i, len, count;
    char string[10000], ch;

    // take number of test cases
    scanf("%d", &T);
    while (T--)
    {
        // take input
        scanf(" %[^\n]", string);
        scanf(" %c", &ch);

        len = strlen(string);

        count = 0;
        for (i = 0; i < len; i++)
            if (string[i] == ch)
                count++;

        if (count == 0)
            printf("'%c' is not present\n", ch);
        else
            printf("Occurrence of '%c' in '%s' = %d\n", ch, string, count);
    }
    return 0;
}
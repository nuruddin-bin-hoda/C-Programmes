#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, i, count, len;
    char str[10002];

    scanf("%d", &T);
    while (T--)
    {
        scanf(" %[^\n]", str);

        len = strlen(str);
        count = 0;

        for (i = 0; i < len; i++)
        {
            if (str[i] == ' ')
                count++;
        }

        if (count > 0)
            count++;

        printf("Count = %d\n", count);
    }

    return 0;
}
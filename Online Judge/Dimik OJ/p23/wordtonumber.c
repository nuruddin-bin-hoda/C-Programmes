#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, i, len;
    char str[101];

    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", str);

        len = strlen(str);

        for (i = 0; i < len; i++)
        {
            printf("%d", str[i] - 64);
        }

        printf("\n");
    }

    return 0;
}
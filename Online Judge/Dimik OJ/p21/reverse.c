#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, i, len;
    char str[1001];

    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", str);

        len = strlen(str);

        for (i = len - 1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }

        printf("\n");
    }

    return 0;
}

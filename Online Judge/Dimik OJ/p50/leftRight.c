#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char str[51];
        int i, len;

        scanf(" %[^\n]", str);

        len = strlen(str);

        for (i = 1; i < len - 1; i++)
        {
            if (str[i] == 'L')
                str[i] = str[i - 1];
            else if (str[i] == 'R')
                str[i] = str[i + 1];
        }

        printf("%s\n", str);
    }

    return 0;
}
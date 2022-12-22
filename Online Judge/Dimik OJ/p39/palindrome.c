#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char str[1001];
        int i, j, len, flag;

        scanf(" %[^\n]", &str);

        len = strlen(str);
        flag = 1;

        for (i = 0, j = len - 1; i < len / 2; i++, j--)
        {
            if (str[i] != str[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("Yes! It is palindrome!\n");
        else
            printf("Sorry! It is not palindrome!\n");
    }

    return 0;
}
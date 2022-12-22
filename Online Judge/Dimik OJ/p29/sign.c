#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char ch;
        scanf(" %c", &ch);

        if (ch >= 65 && ch <= 90)
            printf("Uppercase Character\n");
        else if (ch >= 97 && ch <= 122)
            printf("Lowercase Character\n");
        else if (ch >= 48 && ch <= 57)
            printf("Numerical Digit\n");
        else
            printf("Special Characters\n");
    }

    return 0;
}
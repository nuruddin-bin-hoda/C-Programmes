#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char mainStr[129], subStr[129];
        char *pos;

        scanf(" %s %s", mainStr, subStr);

        pos = strstr(mainStr, subStr);

        printf("%d\n", pos - mainStr);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char mainStr[129], subStr[129];
        int i, j, mainLen, subLen, count;

        scanf(" %s %s", mainStr, subStr);

        mainLen = strlen(mainStr);
        subLen = strlen(subStr);
        count = 0;

        for (i = 0; i < mainLen; i++)
        {
            if (subStr[0] == mainStr[i])
            {
                for (j = 1; j < subLen; j++)
                    if (subStr[j] != mainStr[i + j])
                        break;

                if (j == subLen)
                    count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
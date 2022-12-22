#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char numStr[4];
    int T, i, originalNum, numAdd;

    scanf("%d", &T);
    while (T--)
    {
        scanf(" %s", numStr);

        originalNum = atoi(numStr);
        numAdd = 0;

        for (i = 0; i < 3; i++)
        {
            numAdd += (numStr[i] - 48) * (numStr[i] - 48) * (numStr[i] - 48);
        }

        if (originalNum == numAdd)
            printf("%d is an armstrong number!\n", originalNum);
        else
            printf("%d is not an armstrong number!\n", originalNum);
    }

    return 0;
}
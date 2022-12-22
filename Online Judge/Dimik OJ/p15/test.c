#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int i, l, senLen;
        int count[26] = {0};
        char sen[1001];

        scanf(" %s", sen);

        senLen = strlen(sen);

        for (i = 0; i < senLen; i++)
        {
            if (sen[i] >= 'a' && sen[i] <= 'z')
                count[sen[i] - 'a']++;
        }

        for (l = 0; l < 26; l++)
        {
            if (count[l] != 0)
            {
                printf("%c = %d\n", 'a' + l, count[l]);
            }
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int T;
    scanf("%d", &T);

    while (T--)
    {
        int i, j, l, senLen, chLen;
        int count[26] = {0};
        char sen[1000];

        scanf(" %s", sen);

        senLen = strlen(sen);
        chLen = strlen(ch);

        for (i = 0; i < senLen; i++)
        {
            for (j = 0; j < chLen; j++)
            {
                if (sen[i] == ch[j])
                    count[j]++;
            }
        }

        for (l = 0; l < 26; l++)
        {
            if (count[l] != 0)
                printf("%c = %d\n", ch[l], count[l]);
        }
    }

    return 0;
}

// This problem wasn't solved
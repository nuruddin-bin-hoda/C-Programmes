#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, count;
    char str[10001], *token;

    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", str);

        count = 0;

        token = strtok(str, ".,!;: ");
        while (token != NULL)
        {
            count++;

            token = strtok(NULL, ".,!;: ");
        }

        printf("Count = %d\n", count);
    }

    return 0;
}
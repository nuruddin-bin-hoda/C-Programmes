#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        float food;
        int count;

        scanf("%f", &food);

        count = 0;
        while (food > 1)
        {
            food = food / 2;
            count++;
        }

        printf("%d days\n", count);
    }

    return 0;
}
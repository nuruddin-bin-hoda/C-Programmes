#include <stdio.h>

void bubble_sort(int num[], int n);

int main(void)
{
    int l, T;

    // take number of test cases
    scanf("%d", &T);

    for (l = 1; l <= T; l++)
    {
        // take three numbers
        int num[3];
        scanf("%d %d %d", &num[0], &num[1], &num[2]);

        int n = sizeof(num) / sizeof(int);

        bubble_sort(num, n);

        printf("Case %d: %d %d %d\n", l, num[0], num[1], num[2]);
    }

    return 0;
}

// function to sort numbers
void bubble_sort(int num[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
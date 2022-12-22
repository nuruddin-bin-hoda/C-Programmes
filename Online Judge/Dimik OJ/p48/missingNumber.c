#include <stdio.h>

int getMissingNumber(int array[], int n)
{
    int i, missing, temp[n];

    for (i = 0; i < n; i++)
        temp[i] = 0;

    for (i = 0; i < n - 1; i++)
        temp[array[i] - 1] = 1;

    for (i = 0; i < n; i++)
    {
        if (temp[i] == 0)
            missing = i + 1;
    }

    return missing;
}

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, i, missing;

        scanf("%d", &n);
        int arr[n - 1];

        for (i = 0; i < n - 1; i++)
            scanf("%d", &arr[i]);

        missing = getMissingNumber(arr, n);

        printf("%d\n", missing);
    }

    return 0;
}
#include <stdio.h>

int is_sorted_inc(int arr[], int N)
{
    int i, result;

    // check increment order
    for (i = 0; i <= N - 2; i++)
    {
        if (arr[i] <= arr[i + 1])
            result = 1;
        else
            return 0;
    }

    return result;
}

int is_sorted_dec(int arr[], int N)
{
    int i, result;

    // check decrement order
    for (i = 0; i <= N - 2; i++)
    {
        if (arr[i] >= arr[i + 1])
            result = 1;
        else
            return 0;
    }

    return result;
}

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, i, increment, decrement;

        // take number of array
        scanf("%d", &N);

        // take array elements
        int arr[N];
        for (i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        // check arr is sorted or not
        increment = is_sorted_inc(arr, N);
        decrement = is_sorted_dec(arr, N);

        if (increment || decrement)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
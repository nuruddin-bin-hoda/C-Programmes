#include <stdio.h>

void bubble_sort(int A[], int n);

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n1, n2, n, i, arr[200];

        scanf("%d", &n1);
        for (i = 0; i < n1; i++)
            scanf("%d", &arr[i]);

        scanf("%d", &n2);
        n = n1 + n2;
        for (; i < n; i++)
            scanf("%d", &arr[i]);

        bubble_sort(arr, n);

        for (i = 0; i < n; i++)
        {
            printf("%d", arr[i]);

            if (i + 1 != n)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

// function to shrt array
void bubble_sort(int A[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
            }
        }
    }
}
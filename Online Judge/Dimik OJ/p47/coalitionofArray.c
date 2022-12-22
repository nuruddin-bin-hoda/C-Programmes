#include <stdio.h>

void bubble_sort(int A[], int n);

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n1, n2, i, j;

        // take first array
        scanf("%d", &n1);
        int array1[n1];

        for (i = 0; i < n1; i++)
            scanf("%d", &array1[i]);

        // take second array
        scanf("%d", &n2);
        int array2[n2];

        for (i = 0; i < n2; i++)
            scanf("%d", &array2[i]);

        int array3[n1 + n2];

        // assign array1 & array2 to array3
        for (i = 0; i < n1; i++)
            array3[i] = array1[i];

        for (j = 0; i < n1 + n2, j < n2; i++, j++)
            array3[i] = array2[j];

        bubble_sort(array3, n1 + n2);

        for (i = 0; i < n1 + n2; i++)
            printf("%d ", array3[i]);

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
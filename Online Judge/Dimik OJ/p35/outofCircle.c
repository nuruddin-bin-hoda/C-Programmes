#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int Xc, Yc, r, X, Y;
        float PQ = 0;

        scanf("%d %d", &Xc, &Yc);
        scanf("%d", &r);
        scanf("%d %d", &X, &Y);

        PQ = sqrt((X - Xc) * (X - Xc) + (Y - Yc) * (Y - Yc));

        if (r < PQ)
            printf("The point is not inside the circle\n");
        else
            printf("The point is inside the circle\n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        float a, b, c, s, area;

        scanf("%f %f %f", &a, &b, &c);

        // range of triangle
        s = (a + b + c) / 2;

        // area of triangle
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area = %.3f\n", area);
    }

    return 0;
}
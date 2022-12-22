#include <stdio.h>

int main(void)
{
    int T, r1, r2, B, ball_played;
    double current_rr, required_rr;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // score input
        scanf("%d %d %d", &r1, &r2, &B);

        // current run rate
        ball_played = 300 - B;
        current_rr = (r2 * 1.0 / ball_played) * 6;

        // required run rate
        if (r1 < r2)
            required_rr = 0.00;
        else
            required_rr = ((r1 - r2 + 1) * 1.0 / B) * 6;

        printf("%0.2lf %0.2lf\n", current_rr, required_rr);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int T;

    // take number of test cases
    scanf("%d", &T);

    while (T--)
    {
        // take input
        int opnt_run, btm_run, has_bol, ned_run;
        float over, prt_rr, ned_rr;

        scanf("%d %d %d", &opnt_run, &btm_run, &has_bol);

        // present run rate
        over = (float)(300 - has_bol) / 6;
        prt_rr = btm_run / over;

        // need run rate
        over = (float)has_bol / 6;
        ned_run = (opnt_run - btm_run) + 1;
        if (opnt_run < btm_run)
            ned_rr = 0.00;
        else
            ned_rr = (float)ned_run / over;

        printf("%0.2f %0.2f\n", prt_rr, ned_rr);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int BJT,UCT;
    while(scanf("%d",&BJT) && BJT >= 0 && BJT <= 2359 && BJT % 100 < 60)
    {
        if(BJT >= 800)
        {
            UCT = BJT - 800;
            printf("%d",UCT);
        } else
        {

            int a = BJT / 100;
            int b = BJT % 100;
            printf("%d",(24 + (a - 8)) * 100 + b);
        }
    }
    return 0;
}

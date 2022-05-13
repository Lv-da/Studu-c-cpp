#include <stdio.h>

int main()
{
    double a,c;
    int b,i;
    scanf("%lf %d %lf",&a,&b,&c);
    printf("%d\n",c);
    for(i=1;i<=b;i++){
        c *= (1+a);
    }
    printf("%f\n",c);
    printf("%d",c);

    return 0;
}
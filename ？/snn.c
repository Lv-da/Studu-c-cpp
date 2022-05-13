#include <stdio.h>

int main()
{
    double sn = 0;
    int k = 0;
    int n = 0;
    scanf("%d",&k);
    do{
        n++;
        sn = sn + 1.0/n;
    }while( sn <= k);

    printf("%d",n);

    return 0;
}

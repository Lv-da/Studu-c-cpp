#include <stdio.h>

int main()
{
    long long int a,sum;
    sum = 0;
    scanf("%lld",&a);
    while (a != 0)
    {
        if(a>=0){
            sum = sum + a;
        }
        scanf("%lld",&a);
    }
    printf("%d",sum);

    return 0;
}
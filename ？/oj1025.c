#include <stdio.h>

int main()
{
    unsigned long long int num=1,sum=0;
    double v;
    for(int i=0;i<64;i++){
        sum = sum + num;
        num = 2*num;
    }
    v = sum/142000000.0;
    printf("%llu\n%lf",sum,v);

    return 0;
}
#include <stdio.h>

int main()
{
    long long int t,k,i,j=1,p[10001],n;
    long long int a[101],b,c,d;
    scanf("%lld",&t);
    for(i=0;j<=10000;i++){
        n=i;
        b=0;
        d=0;
        while(n!=0){
            a[b]=n%10;
            n/=10;
            b++;
        }
        for(c=0;c<=b;c++){
            d=d+a[c];
        }
        if(d==10){
                p[j]=i;
                j++;
            }
    }
    for(i=0;i<t;i++){
        scanf("%lld",&k);
        printf("%lld\n",p[k]);
    }

    return 0;
}
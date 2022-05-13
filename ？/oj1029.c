#include <stdio.h>

int main()
{
    long long int a,b,k,i=0,c[100001]={0},All=0,j,x=0,T=0,round=0;
    scanf("%lld %lld %lld",&k,&a,&b);
    if(a>=k){
        for(;a>k;){
            a=a-k;
        }
    }
    printf("a=%lld\n",a);
    while(round!=1){
        c[a] = (long long int)1;
        printf("i1=%lld\n",i);
        a=a+b;
        printf("i2=%lld\n",i);
        if(a>=k){
            for(;a>k;){
            a=a-k;
            T++;
            }
        }
        x++;
        printf("x=%lld T=%lld\n",x,T);
        if(x*b==T*k){
            printf("break\n");
            round=1;
        }
    }
    printf("x*b=%lld t*k=%lld\n",x*b,T*k);
    for(j=0;j<k;j++){
        if(c[j]==0){
            All=0;
            break;
        }else{
            All=1;
        }
    }
    printf("All=%lld\n",All);
    if(All==1){
        printf("Yes");
    }else if(All==0){
        printf("No");
    }

    return 0;
}
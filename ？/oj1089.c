#include <stdio.h>

int pp(int m,int n)
{
    int k,j,ppp = 0;
    while(m!=0 && n!=0){
        if(m>n){
            j = n;
            m = m - j;
            ppp = ppp + 4 * j;
        }else{
            j = m;
            n = n - j;
            ppp = ppp + 4 * j;
        }
    }
    
    return ppp;
}

int main()
{
    int t,m,n,i,power;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&m,&n);
        power = pp(m,n);
        printf("%d\n",power);
    }

    return 0;
}
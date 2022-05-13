#include <stdio.h>

int bigger(int a,int b)
{
    return a>b?a:b;
}

int tens(int x,int y)
{
    int z=1;
    if(y>0){
        for(int c=0;c<y;c++){
            z = z*x;
        }
    }
    return z;
}

int count(int num)
{
    int count=0;
    while(num!=0)
    {
       num/=10;
       count++;
    }
    return count;
}

int needToBuy(int n)
{
    int j,k,l,x,y,b[10] = {0},num = 0;
    for(j=0;j<n;j++){
        scanf("%d",&x);
        k = count(x);
        while (x!=0){
            y = x % 10;
            b[y] = b[y] + 1;
            x /= 10;
        }
    }
    int max = 0;
    for(l=0;l<10;l++){
        max = bigger(max,b[l]); 
    }
    for(l=0;l<10;l++){
        num = num + (max - b[l]);
    }

    return num;
}

int main()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n",needToBuy(n));
    }

    return 0;
}
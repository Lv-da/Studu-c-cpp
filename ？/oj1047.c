#include <stdio.h>

int max(int a,int b)
{
    return a>b?a:b;
}

int min(int a,int b)
{
    return a>b?b:a;
}

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==0 && b==0){
        printf("%d",max(2*c,2*d));
    }else if(a==b){
        printf("%d",a+b+2*c+2*d);
    }else{
        printf("%d",2*min(a,b)+1+2*c+2*d);
    }

    return 0;
}
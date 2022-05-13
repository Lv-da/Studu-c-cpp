#include <stdio.h>

int main()
{
    int i,n,a,b,c,d;
    for(i=10;;i++){
        //n = i*i;
        d = n%10;
        c = n/10%10;
        b = n/100%10;
        a = n/1000;
        n = i*i;
        if(a==b && c==d){
            break;
        }
    }
    printf("%d",n);
}
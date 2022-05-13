#include <stdio.h>

int main()
{
    long int a,s,b,c;
    scanf("%ld %ld %ld",&a,&s,&b);
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    while(a%b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    if(b==1){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}
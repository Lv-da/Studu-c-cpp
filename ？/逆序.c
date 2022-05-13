#include <stdio.h>

int main()
{
    int a,b,c,d,x;
    scanf("%d",&x);
    a = x / 100;
    b = x % 100 / 10;
    c = x % 10;
    printf("%d",c * 100 + b * 10 +a);
    return 0;
}

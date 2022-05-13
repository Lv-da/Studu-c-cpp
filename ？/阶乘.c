#include <stdio.h>

int main()
{
    int n;
    scanf("%D",&n);
    int fact = 1;
    int i = 1;
    for(i=2;i<=n;i++){//先进行第一项，随后进行第二项判断条件，后进行大括号中运算，最后进行第3项运算，即1》2》for》3》2》for》3》……
        fact *= i;
    }
    printf("%d!=%d\n",n,fact);

    return 0;
}

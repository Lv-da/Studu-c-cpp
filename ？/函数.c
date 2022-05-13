#include <stdio.h>

int sum(int a,int b)
{
    printf("a+b=%d\n",a+b);
}
int main()
{
    sum(1,2);
    int a,b;
    scanf("%d %d",&a,&b);//记得scanf后面变量要带&
    sum(a,b);
    return 0;
}

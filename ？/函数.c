#include <stdio.h>

int sum(int a,int b)
{
    printf("a+b=%d\n",a+b);
}
int main()
{
    sum(1,2);
    int a,b;
    scanf("%d %d",&a,&b);//�ǵ�scanf�������Ҫ��&
    sum(a,b);
    return 0;
}

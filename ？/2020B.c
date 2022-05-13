#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Sum:");
    printf("%d\n",5+6+3+6+3+7+3+4+1+7+7+24+3+2+9+8);
    printf("Product:");
    long long int a;//��ǿ������ת��
    a = (long long int)5*6*3*6*3*7*3*4*1*7*7*24*3*2*9*8;
    printf("%lld",(long long int)5*6*3*6*3*7*3*4*1*7*7*24*3*2*9*8/*a*/);
    return 0;
}

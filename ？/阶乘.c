#include <stdio.h>

int main()
{
    int n;
    scanf("%D",&n);
    int fact = 1;
    int i = 1;
    for(i=2;i<=n;i++){//�Ƚ��е�һ������еڶ����ж�����������д����������㣬�����е�3�����㣬��1��2��for��3��2��for��3������
        fact *= i;
    }
    printf("%d!=%d\n",n,fact);

    return 0;
}

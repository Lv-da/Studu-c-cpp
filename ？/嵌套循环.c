#include <stdio.h>

int main()
{
    int x;
    int cnt=0;//����
    for(x=1;cnt<50;x++){//���ǰ50������
        int i;
        int isprime=1;
        for(i=2;i<x;i++){
            if(x % i == 0){
                isprime = 0;
                break;//����ѭ������Լʱ�����Դ
            }
        }
        if(isprime == 1){//��֤�Ƿ�Ϊ����
            cnt++;
            printf("%d\t",x);//\t����
            if(cnt %5 ==0){
                printf("\n");//\n�س�������
            }
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int x;
    int cnt=0;//计数
    for(x=1;cnt<50;x++){//输出前50个素数
        int i;
        int isprime=1;
        for(i=2;i<x;i++){
            if(x % i == 0){
                isprime = 0;
                break;//结束循环，节约时间和资源
            }
        }
        if(isprime == 1){//验证是否为素数
            cnt++;
            printf("%d\t",x);//\t对齐
            if(cnt %5 ==0){
                printf("\n");//\n回车，换行
            }
        }
    }
    return 0;
}

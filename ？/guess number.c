#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x = rand()%100+1;
    printf("我已经想好了一个数\n");
    int c = 1;
    int a = 0;
    printf("输入你猜的数吧\n");
    scanf("%d",&a);
    while(a != x){
        if(a > x){
            printf("你猜大了\n");
        }else{
        printf("你猜小了\n");
        }
        printf("现在来再试一次\n");
        scanf("%d",&a);
        c++;
    }
    printf("你猜对了,你猜了%d次\n",c);

    return 0;
}

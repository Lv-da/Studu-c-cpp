#include <stdio.h>

int main()
{
    int x = 0;
    scanf("%d",&x);
    do{
        x++;
        printf("%d\n",x);
    }while(x < 100);
    printf("我已经大于%d了\n",x);

    return 0;
}

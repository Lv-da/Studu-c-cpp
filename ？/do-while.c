#include <stdio.h>

int main()
{
    int x = 0;
    scanf("%d",&x);
    do{
        x++;
        printf("%d\n",x);
    }while(x < 100);
    printf("���Ѿ�����%d��\n",x);

    return 0;
}

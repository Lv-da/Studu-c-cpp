#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x = rand()%100+1;
    printf("���Ѿ������һ����\n");
    int c = 1;
    int a = 0;
    printf("������µ�����\n");
    scanf("%d",&a);
    while(a != x){
        if(a > x){
            printf("��´���\n");
        }else{
        printf("���С��\n");
        }
        printf("����������һ��\n");
        scanf("%d",&a);
        c++;
    }
    printf("��¶���,�����%d��\n",c);

    return 0;
}

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("��˵�Ŀ϶���%d��\n",a);
        break;
    case 2:
        printf("��֪������϶�˵����%d\n",a);
        break;
    case 3:
        printf("��֪������˵����%d\n",a);
        break;
    default:
        printf("���ʻش��Ҳ�֪������˵���ǲ���%d\n",a);
        break;
    }
    printf("...\n");
    scanf("%d",&b);
    printf("��˵����%d��\n",b);

    return 0;
}

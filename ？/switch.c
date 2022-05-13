#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("你说的肯定是%d吧\n",a);
        break;
    case 2:
        printf("我知道，你肯定说的是%d\n",a);
        break;
    case 3:
        printf("我知道，你说的是%d\n",a);
        break;
    default:
        printf("优质回答：我不知道。你说的是不是%d\n",a);
        break;
    }
    printf("...\n");
    scanf("%d",&b);
    printf("你说的是%d吗\n",b);

    return 0;
}

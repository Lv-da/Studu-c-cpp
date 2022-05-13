#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d",&a);
    if(a > 5){
        if(a > 10){
            printf("a>10\n");
        }else
        printf("5<a<=10\n");
    }else if(a > 3){
    printf("a>3\n");
    }else
    printf("a<=3\n");

    return 0;
}

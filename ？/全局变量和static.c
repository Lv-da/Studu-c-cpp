#include <stdio.h>

int f(void);
int g(void);

int gAll = 12;//全局变量，如果函数定义同名变量会被隐藏

int main(int argc, char const *argv[])
{
    f();
    g();
    f();
    g();
    f();
    g();

    return 0;
}

int f(void)
{
    static int all = 1;//static静态本地变量，使变量在进出函数时保持不变，只访问一次
    printf("in %s all = %d\n",__func__,all);//__func__显示目前所在的函数的函数名
    all += 2;
    printf("agn in %s all = %d\n",__func__,all);
    return all;
}
//静态本地变量是特殊的全局变量，可以取地址来区分
int g(void)
{
    int sall = 1;
    printf("in %s sall = %d\n",__func__,sall);
    sall += 2;
    printf("agn in %s sall = %d\n",__func__,sall);
    return sall;
}

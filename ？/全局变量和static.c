#include <stdio.h>

int f(void);
int g(void);

int gAll = 12;//ȫ�ֱ����������������ͬ�������ᱻ����

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
    static int all = 1;//static��̬���ر�����ʹ�����ڽ�������ʱ���ֲ��䣬ֻ����һ��
    printf("in %s all = %d\n",__func__,all);//__func__��ʾĿǰ���ڵĺ����ĺ�����
    all += 2;
    printf("agn in %s all = %d\n",__func__,all);
    return all;
}
//��̬���ر����������ȫ�ֱ���������ȡ��ַ������
int g(void)
{
    int sall = 1;
    printf("in %s sall = %d\n",__func__,sall);
    sall += 2;
    printf("agn in %s sall = %d\n",__func__,sall);
    return sall;
}

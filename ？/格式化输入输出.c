/*
printf
%[flag][width][.prec][hlL]type
[flag] - 左对齐；+ 在前面放+或-；（space）正数留空；0 0填充
[width][.prec] number 最小字符数；* 下一个参数是字符数；.number 小数点后的位数；.* 下一个参数是小数点后的位数
[hlL]类型修饰 hh单个字节short short == char；h short；l long；ll long long；L long double；
[type]
i或d    u              o        x         X                   f/F       e/E      g      G      a/A           c     s       p      n
int    unsigned int   八进制   十六进制   字母大写的十六进制   float，6   指数     float  float  十六进制浮点   char  字符串   指针   读入/写出的个数  

scanf
%[flag]type 
[flag] * 跳过；数字 最大字符数；hh char；h short；l；ll；L
[type]
d         i                u              o         x        a/e/f/g         c        s             […]                 p
int     整数/可16或8进制   unsigned int   八进制    十六进制    float          char     字符串（单词    所允许的字符        指针

printf和scanf有返回值
printf -》输出的字符数
scanf -》读入的项目数
*/
#include<stdio.h>

int main()
{
    int len;
    int num;
    printf("%09d\n",123);
    printf("%-9d\n",123);
    printf("%+9d\n",123);
    printf("% 9d\n",123);
    printf("%*d\n",6,123);
    printf("%*d\n",len,123);
    printf("%d%n\n",12345,&num);
    printf("%d",num);
}
#include<stdio.h>
char s1[3],s2[3];
int main() {
    int x,y;
    char cx,cy;
    scanf("%s%s",s1,s2);
    x=s1[0]-s2[0];
    y=s1[1]-s2[1];    //取坐标之差
    cx=x<0? 'R':'L';
    cy=y<0? 'U':'D';    //根据坐标差的正负选择方向
    if(x<0)
        x=-x;
    if(y<0)            //相当于取绝对值
        y=-y;
    printf("%d\n",x>y? x:y);
    for(;x||y;putchar('\n')) {    //循环条件，当前点与终点之间有距离
        if(x) {
            --x;
            putchar(cx);    //横坐标走一步
        }
        if(y) {
            --y;
            putchar(cy);    //纵坐标走一步
        }
    }
    return 0;
}
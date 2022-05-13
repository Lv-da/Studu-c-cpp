/* 展开
题目描述
陶陶家的院子里有一棵苹果树，每到秋天树上就会结出 10 个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个 30 厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。

现在已知 10 个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。

输入格式
输入包括两行数据。第一行包含 10 个 100 到 200 之间（包括 100 和 200 ）的整数（以厘米为单位）分别表示 10 个苹果到地面的高度，
两个相邻的整数之间用一个空格隔开。第二行只包括一个 100 到 120 之间（包含 100 和 120 ）
的整数（以厘米为单位），表示陶陶把手伸直的时候能够达到的最大高度。

输出格式
输出包括一行，这一行只包含一个整数，表示陶陶能够摘到的苹果的数目。*/

#include <stdio.h>

int bigger(int a,int x)
{
    if (a <= x){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    int k = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    scanf("%d",&k);
    int x = k + 30;
    int n = 0;
    n = n + bigger(a,x);
    n = n + bigger(b,x);
    n = n + bigger(c,x);
    n = n + bigger(d,x);
    n = n + bigger(e,x);
    n = n + bigger(f,x);
    n = n + bigger(g,x);
    n = n + bigger(h,x);
    n = n + bigger(i,x);
    n = n + bigger(j,x);
    printf("%d",n);

    return 0;
}

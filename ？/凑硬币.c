#include <stdio.h>

int main()
{
    int x;
    int one,two,five;
    int exit = 0;

    scanf("%d",&x);
    for(one = 1;one < x*10;one++){
        for(two = 1;two < x*10/2;two++){
            for(five = 1;five < x*10/5;five++){
                if(one + two * 2 + five *5 == x*10){
                    printf("%d+%d*2+%d*5角=%d元\n",one,two,five,x);
                    exit =1;
                    goto out;
                    //break;
                }
            }
            //if(exit)break;
        }
        //if(exit)break;
    }
out://使用goto或者接力break离开整个循环，只输出一种结果，goto的标号需要用冒号结尾
    return 0;
}

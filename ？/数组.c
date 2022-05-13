#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];
    scanf("%d",&x);
    while(x != -1){
        number[cnt] = x;
        sum += x;
        cnt++;
        scanf("%d",&x);
    }
    if (cnt > 0){
        int i;
        printf("%.1f\n",sum/cnt);//x.y,x决定位数，y决定小数点后几位
        for( i=0;i<cnt;i++){
            if(number[i]>sum/cnt){
                printf("%d\n",number[i]);
            }
        }
    }
    return 0;
}

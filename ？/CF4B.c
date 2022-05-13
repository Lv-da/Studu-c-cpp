#include<stdio.h>
struct Data {
    int min,max;
    int delta;        //为了实现对YES情况先选择总计的minTime，记录maxTime与minTime的差值
}D[31],sum;
int main() {
    int d,t;
    scanf("%d%d",&d,&t);
    for(int i=0;i<d;++i) {
        scanf("%d%d",&D[i].min,&D[i].max);
        D[i].delta=D[i].max-D[i].min;
        sum.min+=D[i].min;
        sum.max+=D[i].max;
    }
    if(sum.max<t||sum.min>t)
        printf("NO");
    else {
        printf("YES\n");
        t-=sum.min;                //先选择总计的minTime
        for(int i=0;i<d;++i) {
            if(t>=D[i].delta) {            //贪心地选择
                printf("%d ",D[i].max);
                t-=D[i].delta;
            }
            else {
                printf("%d ",t+D[i].min);
                t=0;
            }
        }
    }
    return 0;
}


/*#include <stdio.h>

int main()
{
    int d,sumTime,minTime[31],maxTime[31],i,j,sumMax=0,sumMin=0,sum=0,finish=0;
    scanf("%d %d",&d,&sumTime);
    for(i=1;i<=d;i++){
        scanf("%d %d",&minTime[i],&maxTime[i]);
        sumMax+=maxTime[i];
        sumMin+=minTime[i];
    }
    if(sumMax>=sumTime&&sumMin<=sumTime){
        printf("YES\n");
        for(j=1;j<=d;j++){
            sum+=maxTime[j];
            if(sum<sumTime){
                printf("%d ",maxTime[j]);
            }else if(sum==sumTime){
                if(finish==0){
                    printf("%d ",maxTime[j]);
                    finish=1;
                }else if(finish==1){
                    printf("0 ");
                }
            }else if(sum>sumTime){
                if(finish==0){
                    printf("%d ",maxTime[j]-(sum-sumTime));
                    finish=1;
                }else if(finish==1){
                    printf("0 ");
                }
            }
        }
    }else{
        printf("NO\n");
    }

    return 0;
}*/
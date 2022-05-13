#include<stdio.h>
int n,t[1001],i,ans;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ans);
        t[ans]=1;
    }
    ans=0;
    for(i=1;i<=1000;i++)
        if(t[i])
            ans++;
    printf("%d\n",ans);
    for(i=1;i<=1000;i++)
        if(t[i])
            printf("%d ",i);
    return 0;
}
/*���������д�ǰ���������˳��������ͬʱ����ȥ�أ�ʵ����̫����*/

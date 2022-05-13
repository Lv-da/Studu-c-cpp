#include <stdio.h>

int main()
{
    int a[1001][1001]={0};
    int n,m,q,t,x,y,i,j;
    scanf("%d %d %d",&n,&m,&q);
    for(i=0;i<q;i++){
        scanf("%d %d %d",&t,&x,&y);
        if(t==1){
            for(j=0;j<m;j++){
                a[x-1][j]=y;
            }
        }else if(t==2){
            for(j=0;j<n;j++){
                a[j][x-1]=y;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

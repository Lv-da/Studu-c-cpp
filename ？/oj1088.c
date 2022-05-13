#include <stdio.h>

int bigger(int a,int b)
{
    return a>b?a:b;
}

int main()
{
    int n,k,max,a[1001];
    int i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=k){
            printf("hao! hen you jing shen!\n");
        }else{
            printf("ni bu gou jing shen!\n");
        }
    }
    max = 0;
    for(i=0;i<n;i++){
        max = bigger(max,a[i]);
    }
    if(max >= k){
        printf("%d\n",max);
    }else{
        printf("I am angry!\n");
    }

    return 0;
}
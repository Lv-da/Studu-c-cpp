#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",n,k);
    int a[n];
    int b[n];
    int i,j;
    int s = 0;
    for ( i = 0; i <= n-1;i++ ){
            scanf("%d",&s);
            a[i] = s;
            if ( s > k ){
                j = 0;
                printf("hao! hen you jing shen!\n");
                b[j] = a;
                j++;
            }else{
                printf("ni bu gou jing shen!\n");
            }
    }
    int l = 0;
    int max = 0;
    for ( l = 0;l <= j;l++){
        if ( b[l] > max ){
            max = b[l];
        }
    }
    return 0;
}

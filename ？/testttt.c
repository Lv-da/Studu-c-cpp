#include <stdio.h>



int main()
{
    int n;
    scanf("%d",&n);
    int s;
    int a[n];
    int i;
    int j,b[1005],k;
    for (i=0;i<n;i++){
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
}

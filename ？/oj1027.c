#include <stdio.h>

int main()
{
    int n,m,i,j;
    int sum = 0;
    scanf("%d",&n);
    for(m=1;sum<n;m++){
        j=1;
        for(i=1;i<=m;i++){
            j = j * i;
        }
        sum = sum + j;
    }
    printf("%d",m-2);

    return 0;
}
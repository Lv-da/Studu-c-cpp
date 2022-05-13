#include <stdio.h>

int main()
{
    int n,i,a,sum = 0;
    scanf("%d",&n);
    while (n!=0)
    {
        sum = 0;
        for(i=0;i<n;i++){
            scanf("%d",&a);
            sum = sum + a;
        }
        printf("%d\n",sum);
        scanf("%d",&n);
    }

    return 0;
}

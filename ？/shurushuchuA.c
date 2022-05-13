// #include <stdio.h>

// int main()
// {
//     int a,b;
//     while(scanf("%d %d",&a,&b) != EOF){
//         printf("%d\n",a+b);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[101];
    int n,i,sum = 0;
    while (scanf("%d",&n) != EOF)
    {
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sum = 0;
        for(i=0;i<n;i++){
            sum = sum + a[i];
        }
        printf("%d\n",sum);
    }

    return 0;
}
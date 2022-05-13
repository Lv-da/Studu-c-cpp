#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int num=1,sum=0;
    double v;
    for(int i=0;i<64;i++){
        sum = sum + num;
        num = 2*num;
    }
    v = sum/142000000.0;
    printf("%llu\n%lf",sum,v);

    return 0;
}

// int main()
// {
//     long double num=1,sum=0;
//     long double v;
//     for(int i=0;i<64;i++){
//         sum = sum + num;
//         num = 2*num;
//     }
//     v = sum/142000000.0;
//     printf("%Lf\n%Lf",sum,v);

//     return 0;
// }


// int main()
// {
//     //int 2147483648
//     int i;
//     float sum=0,n,x=0;
//     for(i=1;i<=64;i++)
//     {
//         n=pow(2,i-1);         //粒数
//         x = x + n;
//         float m=n/(1.42*pow(10,8)); //立方米形式表示
//         sum+=m;   //累加
//         //printf("第%2d格\t%20.0f粒\t%15f立方米麦子。\n",i,n,m);
//         //上句printf用于验证每格放入的麦子数
//     }
//     printf("%f\n共有麦子%f立方米。\n",x,sum);
// }

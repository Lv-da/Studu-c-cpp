#include <stdio.h>

int main()
{
    double e=1,n=1,m,i,j,k;
    int count=1;
    for(i=1;n>=0.00001;i++){
        j=1;
        for(k=1;k<=i;k++){
            j = j * k;
        }
        n = 1.0/j;
        e = e + n;
        count++;
    }
    printf("%lf %d",e,count);

    return 0;
}
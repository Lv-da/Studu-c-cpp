#include <stdio.h>

double oneYearAgo(int n)
{
    return n/(1.225);
}

int main()
{
    double n=1000.0;
    for(int i=0;i<5;i++){
        n = oneYearAgo(n)+1000.0;
    }
    printf("%f",n-1000.0);
    
    return 0;
}
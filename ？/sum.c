#include <stdio.h>
 int main()
 {
     int x = 0;
     int n = -1;
     int a = 0;
     do{
        x = x + a;
        n++;
        scanf("%d",&a);
        }while(a != -1);
        double b = 1.0*x / n;
        printf("%f",b);

        return 0;
 }

#include <stdio.h>

int main()
{
    int fa,ma;
    double a=1.0,tall;
    char mf,sp,diet;
    scanf("%c %d %d %c %c",&mf,&fa,&ma,&sp,&diet);
    if(sp=='Y'){
        a=a+0.02;
    }
    if(diet=='Y'){
        a=a+0.015;
    }
    if(mf=='M'){
        tall = (fa+ma)*0.54*a;
    }else if(mf=='F'){
        tall = (fa*0.923 + ma)/2 * a;
    }
    printf("%f",tall);

    return 0;
}
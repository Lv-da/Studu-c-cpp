#include <stdio.h>

int main()
{
    int f;
    double c;
    for(f=0;f<=300;f=f+10){
        c = (5.0/9.0)*(f-32.0);
        printf("%d %f\n",f,c);
    }

    return 0;
}
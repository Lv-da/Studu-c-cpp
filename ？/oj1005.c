#include <stdio.h>

int main(){
	const double pai = 3.14159265;
    double r,s,v;
    scanf("%lf",&r);
    s = 4.0*pai*r*r;
    v = 4.0/3.0*pai*r*r*r;
    printf("%f\n",v);
    printf("%f",s);
    
    return 0;
}
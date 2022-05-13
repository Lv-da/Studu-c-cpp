//#include <stdio.h>
//
//int main() {
//    int k,n=0;
//
//    scanf("%d",&k);
//
//    for(double Sn=0;Sn<=k;++n,Sn+=1.0/n);
//    printf("%d",n);
//
//    return 0;
//}

#include<stdio.h>
int main(){
	int k,n;
	double sn=0.0;
	scanf("%d",&k);
	for(n=1;;n++){
	 sn+=1.0/n;
	 if(sn>k*1.0)
	  break;
    }
	printf("%d",n);
	return 0;
}

#include <stdio.h>

int main()
{
    int n,p,q,i,j,bigger,k,l,a,b;
    scanf("%d",&n);
    for(j=2;j<n;j++){
        restart:
        for(i=2;i<j;i++){
            if(j % i == 0){
                a = 0;
                break;
            }else{
                a = 1;
            }
        }
        if(a == 1 && n % j == 0){
            l = n / j;
                for(k=2;k<l;k++){
                    if(l % k == 0){
                        b = 0;
                        break;
                    }else{
                        b = 1;
                    }
                }
                if(b == 1 && n % l == 0){
                    p = j;
                    q = l;
                    goto out;
                }else{
                    goto restart;
                }
            }
        
    }
    out:
    printf("%d",q);

    return 0;
}
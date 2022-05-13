#include<stdio.h>

int max(int a,int b)
{
    return a>b?a:b;
}

int l,n,a,i,mx,mn;
int main(){
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {scanf("%d",&a);
        if(a<=l/2)
          {mn=max(a,mn);
           mx=max(mx,l-a+1);
          }
        else
            {mn=max(l-a+1,mn);
             mx=max(mx,a);
            }
       }
    printf("%d %d",mn,mx);

    return 0;
}
#include<stdio.h>
int main()
{
  unsigned long long int M,N;
  scanf("%llu %llu",&N,&M);
  unsigned long long int  z=0;
  unsigned long long int  c=0;
  if(N>M)
  {
    for(int i=M-1;i>=0;i--)
    z+=(N-i)*(M-i);
  }
  else
  {
    for(int i=N-1;i>=0;i--)
    z+=(N-i)*(M-i);
  }
  c=N*M*(N+1)*(M+1)/4-z;
  printf("%llu %llu",z,c);
  return 0;
}


/*#include <stdio.h>

int main()
{
    int m,n,i,j,k,l;
    long long int zheng=0,chang=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==j){
                        zheng++;
                    }else{
                        chang++;
                    }
        }
    }
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
            if(i==j){
                        zheng++;
                    }else{
                        chang++;
                    }
        }
    }
    for(i=n;n-i<=n;i--){
        for(j=m;m-j<=m;j--){
            if(i==j){
                        zheng++;
                    }else{
                        chang++;
                    }
        }
    }
    for(j=m;m-j<=m;j--){
        for(i=n;n-i<=n;i--){
            if(i==j){
                        zheng++;
                    }else{
                        chang++;
                    }
        }
    }
    printf("%lld %lld",zheng,chang);

    return 0;
}*/
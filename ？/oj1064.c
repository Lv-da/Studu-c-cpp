#include <stdio.h>
int n,m[110];
int main()
{
    int a,b,c,i,k=0;
    while(scanf("%d%d%d",&a,&b,&c)&&a&&b&&c)
	{
        k++;
        n=a/b;
        a=a%b;  
        m[0]=0;
        for(i=1;i<=c;i++)
		{
            m[i]=a*10/b;
            a=a*10%b;
        }
        if(a*10/b>=5)
		{
            //m[i]=m[i]+1;四舍五入
            for(i=c;i>=0;i--)
			{
                if(m[i]<10)
                    break; 
                else
                    m[i]-=10;
            } 
        }
        n=n+m[0];
        printf("Case %d: %d.",k,n);
        for(i=1;i<=c;i++)
            printf("%d",m[i]); 
        printf("\n");
    }
    return 0;
}
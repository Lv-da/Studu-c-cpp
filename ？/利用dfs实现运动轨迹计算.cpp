#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long k=0;

void dfs(int x,int y,int step){
    if(step>n+1)return;
    if(step==n+1&&x<=m&&x>=-m){
        k++;
        k%=998244353;
        return;
    }
    for(int i=0;i<=2;i++){
        dfs(x+1,i,step+1);
    }
    dfs(x,y,step+1);
    for(int i=0;i<=2;i++){
        if(i!=y)dfs(x-1,i,step+1);
    }
    return;
}

int main()
{
    cin>>n>>m;
    dfs(0,0,1);
    cout<<k<<endl;
    return 0;
}

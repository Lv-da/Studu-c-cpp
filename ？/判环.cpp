//判断有向图中是否有环
#include <bits/stdc++.h>
using namespace std;
int f[5050][5050]={0};
stack<int> s;
bool vis[5050]={0};
int n,m;
int z;

bool findRing(int x){
    if(vis[x])return true;
    vis[x]=true;
    s.push(x);
    if(s.size()>n)return true;
    for(int i=1;i<=n;i++){
        if(f[x][i]==1/*&&!vis[i]*/){
            if(findRing(i))return true;
        }
    }
    vis[x]=false;
    s.pop();
    return false;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        f[x][y]=1;
    }
    if(findRing(1)){
        cout<<"YE5"<<endl;
    }else cout<<"N0"<<endl;
}
#include <bits/stdc++.h>
using namespace std;
int n;
bool vis[1050];//visited
int a[1050];//array
int num[1050];
int k=0;

void dfs(int step){
    if(step==n+1&&k<3){
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";//print
        }
        cout<<endl;
        k++;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            vis[i]=true;
            a[step]=num[i];
            dfs(step+1);
            vis[i]=false;
        }
    }
    return;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        vis[i]=false;
    }
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    sort(num+1,num+n+1);
    dfs(1);
    return 0;
}
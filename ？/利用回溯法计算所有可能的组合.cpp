#include <bits/stdc++.h>
using namespace std;
int n,k,cnt=0;
int a[1050];
bool vis[1050];

void dfs(int step){
    if(step==k+1){
        if(cnt!=0){
            cout<<", ";
        }
        cout<<"["<<a[1];
        for(int i=2;i<=k;i++){
            cout<<", "<<a[i];
        }
        cout<<"]";
        cnt++;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]&&i>a[step-1]){
            vis[i]=i;
            a[step]=i;
            dfs(step+1);
            vis[i]=0;
        }
    }
}

int main()
{
    a[0]=0;
    cin>>n>>k;
    cout<<"[";
    dfs(1);
    cout<<"]"<<endl;
    return 0;
}

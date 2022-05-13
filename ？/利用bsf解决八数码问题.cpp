#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll dx[]={-1,0,0,1},dy[]={0,-1,1,0};//转移数组，4个方向
ll ans;
int main()
{
    cin>>ans;
    queue<ll> q;
    q.push(ans);
    map<ll,ll> mp;
    mp[ans]=0;
    while(!q.empty()){
        int u=q.front();//初始状态入队列
        int c[3][3],f=0,g=0,n=u;
        q.pop();
        if(u==123804765)break;
        for(ll i=2;i>=0;i--){
            for(ll j=2;j>=0;j--){
                c[i][j]=n%10;//数列转矩阵
                n/=10;
                if(!c[i][j])f=i,g=j;
            }
        }
        for(ll i=0;i<4;i++){
            ll nx=f+dx[i],ny=g+dy[i],ns=0;
            if(nx<0||nx>2||ny<0||ny>2)continue;//越界
            swap(c[f][g],c[nx][ny]);
            for(ll j=0;j<3;j++){
                for(ll k=0;k<3;k++){
                    ns*=10;
                    ns+=c[j][k];//矩阵转数列
                }
            }
            if(!mp.count(ns)){
                mp[ns]=mp[u]+1;//记录路径
                q.push(ns);//添加到队列
            }
            swap(c[f][g],c[nx][ny]);//恢复原状态
        }
    }
    cout<<mp[123804765]<<endl;//输出结果,m的下标直接用数列表示
    return 0;
}

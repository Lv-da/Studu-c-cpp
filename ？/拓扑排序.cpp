//首先使用拓扑排序求出整个图的拓扑序，然后再从终点开始向前递推，动态规划计数。
#include <bits/stdc++.h>
#define Get(u,v) scanf("%d %d", &u, &v)
#define M 80112002

using namespace std;

//节点编号从1开始 
int in_deg[5005], out_deg[5005]; //每个节点的入度、出度 

vector<int> edge[5005]; //边 
int n, m;

int st[5005], stn = 0;
int ed[5005], edn = 0;
int dp[5005];

vector<int> toposort(){
 
 vector<int> ans; 
 queue<int> q;
 //set<int> st;//存出度为0的节点
 for(int i=1; i<=n; i++){
  if(!in_deg[i]){
   //入度为0，入队 
   q.push(i);
   st[stn++] = i;
  }
  else if(!out_deg[i]){
   //出度为0 
   ed[edn++] = i; 
   //顺便设置dp初始值 
   dp[i] = 1;//从后往前dp 
  }
 }
 
 while(!q.empty()){
  int u = q.front(); q.pop();
  ans.push_back(u);
  //检查邻域 
  for(int i=0; i<edge[u].size(); i++){
   int v = edge[u][i];
   if(!(--in_deg[v])){//该点的入度-1，若为0，入队 
    q.push(v);
   }
  } 
 }

 return ans;
}

void dpCountPath(vector<int> arr){
 
 for(int i=n; i>=1; i--){
  int u = arr[i-1];
  int len = edge[u].size();
  for(int j=0; j<len; j++){
   
   int v = edge[u][j];
   dp[u] = (dp[u] + dp[v]) % M;
  }
 }

}

int main(){
 
 Get(n, m);

 
 int u, v;
 for(int i=0; i<m; i++){
  Get(u, v);
  edge[u].push_back(v);//单向 
  in_deg[v]++;
  out_deg[u]++;
 }
 
 vector<int> arr = toposort();//拓扑排序
 
 //for(int i=0; i<arr.size(); i++) printf("%d ", arr[i]); 
 //putchar('\n');
 
 int sum = 0; 

 dpCountPath(arr);
 
 for(int i=0; i<stn; i++){
  sum = (sum + dp[st[i]]) % M;
 }
 printf("%d", sum);
 
 return 0;
}
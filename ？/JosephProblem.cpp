#include <bits/stdc++.h>
using namespace std;

// class Solution {
//     queue<int> ans;
//     int re;
//     void dfs(int k){
//         int len=ans.size();
//         k=k-1;
//         while(k--&&k>=0){
//             int tp=ans.front();
//             ans.pop();
//             ans.push(tp);
//             //cout<<tp<<endl;
//         }
//         cout<<ans.front()<<endl;
//         ans.pop();
//         return;
//     }
//     int func(int n,int m){
//         return (func(n-1,m)+m)%n;
//     }
// public:
//     int findTheWinner(int n, int k) {
//         for(int i=1;i<=n;i++){
//             ans.push(i);
//         }
//         while(ans.size()!=1){
//             dfs(k);
//         }
//         cout<<endl;
//         re=ans.front();
//         return re;
//     }
// };
class Solution {
public:
    int func(int n,int m){
        if(n==0) return 0;
        int tp=(func(n-1,m)+m)%n;
        return tp;
    }
    int findTheWinner(int n, int k) {
        int ans=func(n,k)+1;
        return ans;
    }
};

int main(){
    Solution s;
    int n=5,k=2;
    cout<<s.findTheWinner(n,k)<<endl;
    return 0;
}
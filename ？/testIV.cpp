#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int ans=INT_MAX;
        if(n==1){
            return triangle[0][0];
        }
        vector<vector<int>> res=triangle;
        // vector<int> m;
        // for(int i=0;i<n;i++){
        //     m.push_back(triangle[i].size());
        // }
        // res[0].push_back(triangle[0][0]);
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j>0&&j<i){
                    res[i][j]=min(res[i-1][j-1]+triangle[i][j],res[i-1][j]+triangle[i][j]);
                }else if(j==0){
                    res[i][j]=(res[i-1][j]+triangle[i][j]);
                }else if(j==i){
                    res[i][j]=(res[i-1][j-1]+triangle[i][j]);
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<=i;j++){
        //         cout<<res[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<n;i++){
            ans=ans<res[n-1][i]?ans:res[n-1][i];
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> triangle1 = {{2},{3,4},{6,5,7},{4,1,8,3}};
    vector<vector<int>> triangle2 = {{-1},{-2,-3}};
    auto ans = Solution().minimumTotal(triangle1);
    cout << ans << endl;
    return 0;
}
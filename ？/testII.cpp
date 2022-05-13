#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int len=s.size();
        vector<int> cnt;
        for(int i=0;i<len;i++){
            if(s[i]==c){
                cnt.push_back(i);
            }
        }
        vector<int> ans;
        int count=0;
        for(int i=0;i<len;i++){
            if(i<=cnt[count]&&count!=0){
                int a=abs(cnt[count]-i);
                int b=abs(i-cnt[count-1]);
                if(a<=b){
                    ans.push_back(a);
                }else{
                    ans.push_back(b);
                }
            }else if(i<=cnt[count]){
                ans.push_back(abs(cnt[count]-i));
            }else if(cnt.size()<2){
                ans.push_back(abs(cnt[count]-i));
            }else{
                //while(i>cnt[count])count++;
                if(count+1<cnt.size())count++;
                int a=abs(cnt[count]-i);
                int b=abs(i-cnt[count-1]);
                if(a<=b){
                    ans.push_back(a);
                }else{
                    ans.push_back(b);
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    string str="abba";
    char c='b';
    vector<int> ans=s.shortestToChar(str,c);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s==goal){
                return true;
            }
            char tp=s[0];
            for(int j=0;j<len-1;j++){
                s[j]=s[j+1];
            }
            s[len-1]=tp; 
            cout<<s<<endl;
        }
        return false;
    }
};

int main(){
    string s,goal;
    cin>>s>>goal;
    Solution a;
    cout<<a.rotateString(s,goal)<<endl;
    return 0;
}
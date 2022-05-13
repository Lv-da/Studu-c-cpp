#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len=s1.size();
        string s3(s1);
        int flag=-1;
        while(s1!=s3){
            flag=s2.find(s1);
            if(flag!=-1){
                break;
            }
            next_permutation(s1[0],s1[len-1]);
            if(s1==s3){
                break;
            }
        }
        if(flag!=-1){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Solution s;
    string s1("ab");
    string s2("eidbaooo");
    cout<<s.checkInclusion(s1,s2);
    return 0;
}
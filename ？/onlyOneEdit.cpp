#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool oneEditAway(string first, string second) {
        int n=first.size(),m=second.size();
        int i=0,j=0;
        if(abs(n-m)>=2)return false;//如果两个字符串的长度差超过1，则不可能只有一个编辑操作
        if(n==m){//如果两个字符串长度相等，则只需要比较两个字符串是否只有一个不同的字符
            int diffcnt=0;
            for(i=0;i<n;i++){
                if(first[i]!=second[i]){
                    diffcnt++;
                }
            }
            if(diffcnt<2)return true;
            else return false;
        }else{//若长度不等，则只需要比较两个字符串的长度较长的字符串是否只有一个不同的字符
            int diffcnt=0;
            while(i<n&&j<m){
                if(first[i]==second[j]){
                    i++;
                    j++;
                }else{
                    if(first[i]==second[j+1]){
                        j++;
                        diffcnt++;
                    }else if(first[i+1]==second[j]){
                        i++;
                        diffcnt++;
                    }else{
                        return false;
                    }
                }
            }
            diffcnt+=abs(n-i)+abs(m-j);//计算循环结束后长的字符串后的剩余字符数，
            //因为此时短的字符串已经遍历完，故长的字符串后的剩余字符数计入diffcnt(不同字符数)
            if(diffcnt<2)return true;
            else return false;
        }
    }
};

int main(){
    Solution s;
    cout<<s.oneEditAway("pale","ple")<<endl;
    cout<<s.oneEditAway("pales","pale")<<endl;
    cout<<s.oneEditAway("distance","distain")<<endl;
    return 0;
}
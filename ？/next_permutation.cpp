#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len=s1.size();
        int len2=s2.size();
        int hashs1[26]={0};
        int hashs2[26]={0};
        bool flag=true;
        for(int i=0;i<len;i++){
            hashs1[s1[i]-'a']++;
        }
        for(int i=0;i<len2;i++){
            hashs2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hashs1[i]<=hashs2[i]){
                flag=true;
            }else{
                flag=false;
                return flag;
            }
        }
        
        if(s1.size()>s2.size())return false;
        int len3=s1.size();
        string s3(s1);
        int flag1=s2.find(s1);
        if(flag1!=-1){
            return true;
        }
        //cout<<"1"<<" ";
        next_permutation(s1.begin(),s1.end());
        while(s1!=s3){
            flag1=s2.find(s1);
            //cout<<"2"<<" ";
            if(flag1!=-1){
                break;
            }
            next_permutation(s1.begin(),s1.end());
            if(s1==s3){
                break;
            }
        }
        if(flag1!=-1){
            return true;
        }else{
            return false;
        }
        
    }
};
#include <bits/stdc++.h>
using namespace std;

//检测是否有指针溢出
#define CHECK_OVERFLOW(x) \
    if(x<0){\
        cout<<"overflow"<<endl;\
        return 0;\
    }


int main(){
    int n;
    cin>>n;
    int* nums=new int[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int* hash=new int[n];
    for(int i=0;i<n;i++){
        hash[i]=0;
    }
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        CHECK_OVERFLOW(hash[i]);
        if(hash[i]>1){
            cout<<"true"<<endl;
            return 0;
        }
    }
    cout<<"false"<<endl;
    return 0;
}
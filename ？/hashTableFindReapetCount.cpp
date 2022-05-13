#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        int* hash=new int[n];
        for(int i=0;i<n;i++){
            hash[i]=0;
        }
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[i]>1)return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,3,1};
    cout<<s.containsDuplicate(nums)<<endl;

    return 0;
}
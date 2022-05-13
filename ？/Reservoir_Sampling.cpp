#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> res;
    Solution(vector<int>& nums) {
        res=nums;
    }
    
    int pick(int target) {
        int c = 0;
        int index = 0;
        for(int i = 0;i < res.size();i++)
            if(res[i] == target){
                c++;
                if(rand() % c == 0) index = i;
            }
        return index;
    }
};

int main(){
    vector<int> nums = {3,3,3,3,3};
    Solution solution(nums);
    cout << solution.pick(3) << endl;
}
//594.最长和谐子序列
#include <bits/stdc++.h>
using namespace std;

vector<int> nums;

int findLHS(vector<int>& nums){
	sort(nums.begin(),nums.end());
	int cnt=0;
	for(int i=0;i<nums.size();i++){
		int temp=1,sum=0;
		for(int j=0;j<nums.size();j++){
			if(nums[j]-nums[i]>1){
				break;
			}else{
				sum+=(nums[j]-nums[i]);
				temp++;
			}
		}
		if(sum!=0)
			cnt=max(cnt,temp);
		if(cnt>(nums.size()/2))
			break;
	}
	return cnt;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	cout<<findLHS(nums)<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int rnums[5050]={0};
	int lnums[5050]={0};
	vector<int> nums;
	cout<<"输入n个数，n为:";
	cin>>n;
	for(int i=0;i<n;i++){
		int tp;
		cout<<"输入一个数:";
		cin>>tp;
		if(tp>=0){
			if(rnums[tp]==0){
				nums.push_back(tp);
			}
		}else{
			if(lnums[abs(tp)]==0){
				nums.push_back(tp);
			}
		}
		if(tp>=0){
			rnums[tp]++;
		}else{
			lnums[abs(tp)]++;
		}
	}
	cout<<"不重复的数及次数为:"<<endl;
	int len=nums.size();
	for(int i=0;i<len;i++){
		cout<<nums[i]<<" ";
		if(nums[i]>=0){
			cout<<rnums[nums[i]]<<endl;
		}else{
			cout<<lnums[abs(nums[i])]<<endl;
		}
	}
	cout<<"Completed!"<<endl;
	return 0; 
}

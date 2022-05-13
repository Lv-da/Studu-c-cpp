#include <stdio.h>

int lengthOfLIS(int* nums, int numsSize){
    int dp[2501]={0},m;
    for(int i=0;i<numsSize;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j]&&dp[j]+1>=dp[i]){
                dp[i]=dp[j]+1;
            }
        }
    }
    int max=0;
    for(int i=0;i<numsSize;i++){
        max=dp[i]>=max?dp[i]:max;
    }
    return max;
}

int main()
{   
    int nums[]={0,1,0,3,2,3};
    int numsSize=sizeof(nums)/sizeof(int);
    printf("%d\n",lengthOfLIS(nums,numsSize));
    return 0;
}
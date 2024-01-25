class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int left=0,sum=0;
        int n=nums.size();

        for (int right=0;right<n;right++){
            sum+=nums[right];
            while (sum>=target){
                ans=min(ans,right-left+1);
                sum-=nums[left];
                left++;
            }


        }
        return (ans==INT_MAX)?0:ans;
    }
};
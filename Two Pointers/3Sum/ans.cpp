class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size()<3){
            return {};
        }
        if(nums[0]>0){
            return {};
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int low=i+1;
            int high=nums.size()-1;
            int sum=0;
            while(low<high){
                sum=nums[i]+nums[low]+nums[high];
                if(sum<0)low++;
                else if(sum>0)high--;
                else{
                    ans.push_back({nums[i],nums[low],nums[high]});
                    int last_occurence =nums[low],last_high_occuremce=nums[high];
                    while(low<high && nums[low]==last_occurence){
                        low++;
                    }
                    while(low<high && nums[high]==last_high_occuremce){
                        high--;
                    }
                }
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        for(int j=0;j<nums.size();j++)
        {
            for(int i=j+1;i<nums.size();i++)
            {
                sum=nums[i]+nums[j];
                if(sum==target){
                    return {i,j};
                    break;
                }
            }
        }
        return{};
    }
};
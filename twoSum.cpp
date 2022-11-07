class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> temp(2);
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(nums[i]+nums[j]==target && i != j){
                    temp[0] = i;
                    temp[1] = j;
                }
            }
        }
        return temp;
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            int left = i+1;
            int right = n-1;
            if(i > 0 && nums[i] == nums[i - 1]){    
                continue;
            }
            while(left<right){
                if(nums[left]+nums[right]+nums[i]==0){
                    res.push_back({nums[left],nums[right],nums[i]});
                    int leftRepeat = nums[left] , rightRepeat = nums[right]; 
                    while(left < right && leftRepeat == nums[left]){
                        left ++;
                    }
                    while(left < right && nums[right] == rightRepeat){
                        right--;
                    }
                }
                else if(nums[left]+nums[right]+nums[i]>0){
                    right--;
                }else{
                    left++;
                }
            }
        }
        return res;    
    
    }
};

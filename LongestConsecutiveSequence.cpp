class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n ==0){
            return  0;
        }
        int ans = 1;
        int count =1;
        for(int i =1;i<n;i++){
            //checks the current and previous elements in array, check if not equal
            if(nums[i]!=nums[i-1]){
                // checks if previous element+1 is equal to current element and increments if it is.
                if(nums[i]==nums[i-1]+1){
                    count++;
                }
                //resets the count if it's not.
                else{
                    ans = max(count, ans);
                    count = 1;
                }
            }
        }
        return max(ans,count);
    }
};

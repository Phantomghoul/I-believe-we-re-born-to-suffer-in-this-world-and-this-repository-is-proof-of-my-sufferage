class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 0;
        }
        int s = 0;
        int e = n-1;
        int ans =-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(mid == 0 || nums[mid]>nums[mid-1]){
                ans = mid;
                s = mid +1;
            }
            else{
                e = mid -1;
            }
        }
        return ans;
    }
};

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        int minidx = -1;
        int maxidx = -1;
        int outofboundsidx = -1;
        long long sum = 0;
        for(int i =0; i <n;i++){
            if(nums[i] >= minK && nums[i] <= maxK){
                if(nums[i]==minK){
                    minidx = i;
                }
                if(nums[i]==maxK){
                    maxidx = i;
                }
                sum += max(0, min(minidx,maxidx)- outofboundsidx);
            }
            else{
                outofboundsidx = i;
                minidx = -1;
                maxidx = -1;
            }
        }
        return sum;
    }
};

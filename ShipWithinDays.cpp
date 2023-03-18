class Solution {
public:
    bool partition(vector<int>& nums, int thres, int days){
        int n = nums.size();
        int sum = 0;
        int cnt = 1;
        //Partition
        for(int i =0;i<n;i++){
            int currentSum = sum+nums[i];
            if(currentSum<=thres){
                sum +=nums[i];
            }
            else{
                cnt++;
                if(nums[i]>thres || cnt>days){
                return false;
                }
                sum =0;
                sum +=nums[i];
            }
        }
        return true;

    }
    int IsPossible(vector<int>&nums,int s,int e, int days){
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            //if partition is true
            if(partition(nums,mid,days)){
                ans = mid;
                e = mid -1;
            }
            else{
                s = mid +1;
            }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int s =0;
        int e = 0;
        for(int i =0; i <n;i++){
            e += weights[i];
        }
        return IsPossible(weights, s,e, days);
    }
};

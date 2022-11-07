class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        int sum =1;
        int zeroCount = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==0){
                zeroCount++;
                continue;
            }
            sum *= nums[i];
        }
        if(zeroCount>1){
            vector<int> ans(n,0);
            return ans;
        }else if(zeroCount==0){
            for(int i =0;i<n;i++){
                answer[i]= sum/nums[i];
            }
        }
        else{
            for(int i =0;i<n;i++){
                if(nums[i]==0){ answer[i]=sum; continue;}
                answer[i]=0;
            }
        }
        return answer;
    }
};

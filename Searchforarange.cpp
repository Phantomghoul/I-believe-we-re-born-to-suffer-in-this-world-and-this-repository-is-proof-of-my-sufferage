class Solution {
public:
    int lower_bound(vector<int>& nums, int target, int s,int e){
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                e = mid -1;
            }
            else if(nums[mid]<target){
                s = mid +1;
            }
            else{
                e= mid -1;
            }                
        }
        return ans;
    }
    int upper_bound(vector<int>& nums, int target, int s,int e){
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                s = mid +1;
            }
            else if(nums[mid]<target){
                s = mid +1;
            }
            else{
                e= mid -1;
            } 
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        vec.push_back(lower_bound(nums, target, 0, nums.size()-1));
        vec.push_back(upper_bound(nums,target,0,nums.size()-1));
        return vec;
    }
};

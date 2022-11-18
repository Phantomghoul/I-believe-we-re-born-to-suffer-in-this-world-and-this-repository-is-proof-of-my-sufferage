class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index =0;
        int min = INT_MAX;
        bool isPivoted = false;
        if(nums.size()==1){
            if(nums[0]==target){
                return 0;
            }else{
                return -1;
            }
        }
        for(int i =1; i < nums.size();i++){
            if(nums[i-1]>nums[i]){
                isPivoted = true;
            }
        }
        if(isPivoted){
            for(int i =0;i<nums.size();i++){
                if(min>=nums[i]){
                    min = nums[i];
                    index = i;
                }
            }

            int left = 0; int right = index-1;
            if(nums[left]>target){
                left = index; right = nums.size()-1;
            }
            while(left <= right){
                int mid = left + (right - left)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    right = mid -1;
                }
                else{
                    left = mid +1;
                }
            }
        }
        else{
            int left = 0; int right = nums.size()-1;
            while(left <= right){
                int mid = left + (right - left)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    right = mid -1;
                }
                else{
                    left = mid +1;
                }
            }
        }
        return -1;
    }
};

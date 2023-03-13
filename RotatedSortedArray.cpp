class Solution {
public:
    int binSearch(vector<int>& nums, int s, int e,int target){
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s = mid +1;
            }
            else{
                e = mid -1;
            }
        }
        return -1;
    }
    int pivot_location(vector<int> &nums, int s, int e){
        int ans = -1;
        while(s<=e){
            int mid = s + (e - s)/2;
            if(nums[mid] >= nums[0]){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = pivot_location(nums, 0, n-1);
        cout<<pivot<<" "<<nums.size()-1<<endl;
        if(pivot ==-1 || pivot == nums.size()-1){
            return binSearch(nums, 0,n-1,target);
        }
        int bs1 = binSearch(nums,0, pivot,target);
        int bs2 = binSearch(nums, pivot+1, n-1,target);

        return max(bs1,bs2);
    }
};

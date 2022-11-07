class Solution {
public:
    int maxArea(vector<int>& height) {
        int water  = 0;
        int n = height.size();
        /*
        for(int i =0;i<n;i++){
            for(int j =n-1;j>i;j--){
                water = max(water, (j - i)*min(height[i],height[j]));
            }
        }
        */
        int left = 0;
        int right = n-1;
        while(left < right){
            water = max(water,(right - left)*min(height[left],height[right]));
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return water;
    }
};

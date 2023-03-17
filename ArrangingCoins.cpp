class Solution {
public:
    int lower_bound(int s, int e, int target){
        int ans = -1;
        
        return ans;
    }
    int arrangeCoins(int n) {
        unsigned long long s = 0;
        unsigned long long e = n;
        while(s<=e){
            unsigned long long mid = s +(e-s)/2;
            unsigned long long num = mid*(mid+1)/2;
            if(num >n){
                e = mid -1;
            }
            else{
                s = mid +1;
            }
        }
        return e;
    }
};

class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        else if(x==1) return 1;
        int s = 0;
        int e = x-1;
        long long ans = -1;
        while(s<=e){
            long long mid = s + (e-s)/2;
            long long n = mid*mid;
            if(n==x){
                return mid;
            }
            else if(x>n){
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

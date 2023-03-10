class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        int s = 0;
        int e = num-1;
        while(s<=e){
            long long mid = s + (e-s)/2;
            long long sq = mid*mid;
            if(sq == num){
                return true;
            }
            else if(sq < num){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return false;
    }
};

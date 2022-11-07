class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> Sums;
        int s =0;
        int e = numbers.size()-1;
        while(s<=e){
            if(numbers[s]+numbers[e]==target){
                Sums.push_back(s+1);
                Sums.push_back(e+1);
                return Sums;
            }
            else if(numbers[s]+numbers[e]>target){
                e--;
            }
            else{
                s++;
            }
        }
        
        return Sums;
    }
};

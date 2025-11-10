class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2){
            return true;
        }
        long low = 2, high = num/2;
        while (low <= high) {
            long  mid = low + (high - low) / 2;
            long result =mid*mid;
            if (result==num) {
                return true;
            } else if(result<num) {
                 low= mid + 1;  
            }
            else{
                high=mid-1;
            }
        }
        return false; 
    }
};

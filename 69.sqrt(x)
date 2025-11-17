class Solution {
public:
    int mySqrt(int x) {
        long low = 1, high = x;
        while (low <= high) {
            long  mid = low + (high - low) / 2;
            long sqt =mid*mid;
            if (sqt==x) {
                return mid;
            } else if(sqt<x) {
                 low= mid + 1;  
            }
            else{
                high=mid-1;
            }
        }
        return high; 
    }
};

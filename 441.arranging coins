class Solution {
public:
    int arrangeCoins(int n) {
        int low=1;
        int high=n;
        while(low<=high){
            long mid=low+(high-low)/2;
            long coin=mid*(mid+1)/2;
            if(coin==n){
                return mid;
            }
            else if(coin>n) {
                high=mid-1;  
            }
            else{
                low= mid + 1;
            }
        }
        return high;
    }
};

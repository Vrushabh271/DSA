class Solution {
public:
    int smallestEvenMultiple(int n) {
        int j=0;
        for(int i=2 ;i<=INT_MAX;i++)
        {
            if(i%2==0 && i%n==0)
            {
                j= i;
                break;
            }
        }
        return j;
    }
};
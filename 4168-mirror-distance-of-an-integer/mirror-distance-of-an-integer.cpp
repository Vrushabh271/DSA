class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int re=0;
        while(temp!=0)
        {
            int last= temp%10;
            re = (re*10)+last;
            temp = temp/10;
        }
        return abs(n-re);
    }
};
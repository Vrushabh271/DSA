class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp = num;
        int r1 = 0;
        int r2 = 0;
        while(temp!=0)
        {
            int last = temp%10;
            r1 = (r1*10)+last;
            temp = temp/10;
        }
        while(r1 !=0)
        {
            int last = r1%10;
            r2 = (r2*10)+last;
            r1 = r1/10;
        }
        return r2==num;
    }
};
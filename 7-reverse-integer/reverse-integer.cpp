class Solution {
public:
    int reverse(int x) {
       long long re =0;
       while(x != 0)
       {
         int ld = x % 10;
         re = (re*10)+ld;
         x=x/10;
       } 
         if (re > INT_MAX || re < INT_MIN)
            return 0;
            
       return (int)re;
    }
};
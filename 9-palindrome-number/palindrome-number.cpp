class Solution {
public:
    bool isPalindrome(int x) {
    long re=0;
    int temp = x;
    while(temp != 0)
    {
        int ld = temp % 10;
        re = (re*10)+ld;
        temp=temp/10;
    } 
    if(re!=x || x<0)
    {
        return false;
    }
    else
    {
        return true;
    }
    }
};
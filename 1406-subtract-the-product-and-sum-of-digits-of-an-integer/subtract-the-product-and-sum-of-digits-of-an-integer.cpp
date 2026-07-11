class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum =0;
        long long product = 1;
        while(n != 0)
        {
            int last = n%10;
            sum += last;
            product = product*last;
            n = n/10;
        }
        return product-sum;
    }
};
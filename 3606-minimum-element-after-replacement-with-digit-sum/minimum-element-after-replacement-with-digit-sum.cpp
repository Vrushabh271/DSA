class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> v;

        for(int i=0;i<nums.size();i++)
        {
            int temp = nums[i];
            int sum =0;
            while(temp!=0)
            {
                int last = temp%10;
                sum += last;
                temp = temp/10;
            }
            v.push_back(sum);
        }
        sort(v.begin(),v.end());
        return v[0];
    }
};
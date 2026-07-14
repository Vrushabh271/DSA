#include <bits/stdc++.h>
using namespace std;

int main()
{
    // this is brute force approch to solve Max sum of sub arryas;
    
    int arr[5] = {1,2,3,4,5};
    
    int Max = INT_MIN;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            int sum = 0;
            for(int k = i;k<=j;k++)
            {
                sum+=arr[k];
            }
            Max = max(sum,Max);
        }
    }
    cout<<Max;
}

#include <bits/stdc++.h>
using namespace std;
// this question is solve by brute force algo there is one special algo to solve this question
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd = 1;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
    cout<<gcd;
}
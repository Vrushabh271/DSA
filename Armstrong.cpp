#include<bits/stdc++.h>
using namespace std;

    bool checkArmstrongNumber(int num) {
        int count =0;
        int sum =0;
        int temp = num;
        
        while(temp !=0)
        {
            count ++;
        temp = temp/10;
        }
        
        temp = num;
        
        while(temp !=0)
        {
        int l = temp%10;
        sum += pow(l,count);
        temp = temp/10;
        }
        
        if(sum==num)
        {
            return true;
        }
        else
        {
        return false;
        }
        
    }
    
int main()
{
    cout << boolalpha;
    cout<<checkArmstrongNumber(101)<<endl;
    cout<<checkArmstrongNumber(371)<<endl;
    
}
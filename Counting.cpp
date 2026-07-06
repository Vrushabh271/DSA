#include <bits/stdc++.h>
using namespace std;
//given on the NXTWAVE platform
// Counting Digits That Evenly Divide a Number
/*You have input N.
Your task is to count how many of its digits can divide N completely without any remainder*/

    void evenlyDivides(int N) {
    

        int temp = N;
        int count=0;
        while(temp != 0)
        {
            int l = temp%10;
            if(N%l==0)
            {
                count++;
            }
            temp = temp/10;
        }
        cout<<count<<endl;
        
        
    }
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    evenlyDivides(n);
}
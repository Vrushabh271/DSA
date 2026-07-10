#include <bits/stdc++.h>
using namespace std;
int main()
{ //this is best solution for gcd
    int a ;
    int b;
    cout<<"Enter Two Numbers :- ";
    cin>>a;
    cin>>b;
    while(a!=0 and b!=0)
    {
        if(a>=b)
        {
            a = a%b;
        }
        else{
           b= b%a;
        }
    }
    if(a==0)
    {
        cout<<b;
    }
    else
    {
        cout<<a;
    }

}
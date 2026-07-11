#include<bits/stdc++.h>
using namespace std;
// Question from NxtWave 
class solution {
public:
    int lcm(int A, int B) {
        

        // this is brute force approach
        // int c = max(A,B);
        // while(true)
        // { 
        //     if(c%A==0 and c%B==0)
        //     {
        //         return c;
        //         break;
        //     }
        //     c++;
        // }

        // Using formula
        return (A*B)/__gcd(A,B);
    }

};
int main() {
    solution s;   // Object of Solution class

    int A, B;
    cin >> A >> B;

    cout << s.lcm(A, B) << endl;

    return 0;
}
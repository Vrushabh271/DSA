#include <bits/stdc++.h>
using namespace std;

// you have given one integer input your task is to print all digits in reverse order
class Solution {
public:
    void printDigit(int n) {
        while (n != 0) {
            int last = n % 10;
            cout << last << endl;
            n = n / 10;
        }
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    obj.printDigit(n);

    return 0;
}
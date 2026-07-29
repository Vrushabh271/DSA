#include <bits/stdc++.h>
using namespace std;
// basic practice question to hands on cpp math basics
int ProductOfDigits(int num) {
    int product = 1;

    while (num != 0) {
        int last = num % 10;
        product *= last;
        num /= 10;
    }

    return product;
}

int main() {
    int num;
    cin >> num;

    cout << ProductOfDigits(num) << endl;

    return 0;
}
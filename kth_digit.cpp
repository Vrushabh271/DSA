#include <bits/stdc++.h>
using namespace std;
// this question is given by nxtwave in math basics topic
int kthDigit(int A, int B, int k) {
    int power = pow(A, B);
    int c = 1;

    while (power != 0) {
        int last = power % 10;

        if (c == k) {
            return last;
        }

        c++;
        power /= 10;
    }

    return -1; 
}

int main() {
    int A, B, k;

    cout << "Enter A, B and k: ";
    cin >> A >> B >> k;

    int result = kthDigit(A, B, k);

    if (result == -1)
        cout << "Invalid value of k" << endl;
    else
        cout << "Kth digit: " << result << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//Take a number as input, determine whether it is perfect number or not
class solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;

        for(int i = 1; i < num; i++) {
            if(num % i == 0) {
                sum += i;
            }
        }

        if(sum == num) {
            return true;
        }
        return false;
    }
};

int main() {
    solution obj;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(obj.checkPerfectNumber(num)) {
        cout << "Perfect Number";
    } else {
        cout << "Not a Perfect Number";
    }

    return 0;
}
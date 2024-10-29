//3)WRITE A CPP PROGRAM TO DISPLAY 1ST 25 PRIME NUMBER.
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;
    cout << "The first 25 prime numbers are: " << endl;
    while (count < 25) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

double fastPow(double x, long long n) {
    if (n == 0) return 1.0;

    double half = fastPow(x, n / 2);

    if (n % 2 == 0) 
        return half * half;         // if n is even
    else 
        return half * half * x;     // if n is odd
}

double myPow(double x, int n) {
    long long nn = n;   // convert to long long
    if (nn < 0) {
        nn = -nn;
        return 1.0 / fastPow(x, nn);
    }
    return fastPow(x, nn);
}

int main() {
    cout << myPow(2, 10) << endl;   // 1024
    cout << myPow(2, -3) << endl;   // 0.125
}

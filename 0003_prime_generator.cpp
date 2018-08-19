//https://www.spoj.com/problems/PRIME1/
#include <iostream>
using namespace std;

bool isPrime(int p);
void printPrimeBetweenTwoNumbers(int n, int m);

int main() {
    int numberOfCases;
    cin >> numberOfCases;
    int n, m;
    while (numberOfCases > 0) {
        cin >> n >> m;
        printPrimeBetweenTwoNumbers(n, m);
        cout << endl;
        numberOfCases--;
    }
    return 0;
}

void printPrimeBetweenTwoNumbers(int n, int m) {
    for (int i = n; i <= m; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0) return false;
    if (n % 3 == 0) return false;

    int i = 5;
    while (i * i <= n) {
        if (n % i == 0) return false;
        if (n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

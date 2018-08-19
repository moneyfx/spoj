//https://www.spoj.com/problems/ADDREV/
#include <iostream>
using namespace std;

int reverse(int n);

int main() {
    int numberOfCases;
    cin >> numberOfCases;
    int n1, n2;    
    while (numberOfCases > 0) {
        cin >> n1 >> n2;
        cout << reverse(reverse(n1) + reverse(n2)) << endl;
        numberOfCases--;
    }
    return 0;
}

int reverse(int n) {
    int r = 0;
    while (n > 0) {
        r = (r * 10) + (n % 10);  
        n = n / 10;
    }
    return r;
}

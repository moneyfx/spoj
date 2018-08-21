//https://www.spoj.com/problems/FCTRL/
#include <iostream>
using namespace std;

int Z(int n) {
    int r = 0;
    while (n > 0) {
        n = n / 5;
        r += n;
    }

    return r;
}

int main() {
    int i;
    cin >> i;
    while (i > 0) {
        int n;
        cin >> n;
        cout << Z(n) << endl;
        i--;
    }

    return 0;
}

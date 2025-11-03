#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double x, s0, s=0;
    cout << "Vvedite n: " << "n = ";
    cin >> n;
    cout << "Vvedite x: " << "x = ";
    cin >> x;
    s0 = sqrt(x);
    for (int i=1; i <= n; ++i) {
        s0 += x;
        s = sqrt(s0);
        s = s0;
    }
    cout << "s=" << s;
    return 0;
}
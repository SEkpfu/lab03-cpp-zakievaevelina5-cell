#include <iostream>
using namespace std;

int main() {
    int n;
    double s=0;
    cout << "Vvedite n: " << "n = ";
    cin >> n;
    for (int i=1; i <= n; ++i) {
        s += 1.0/(2.0*i);
    }
    cout << "s = " << s;
    return 0;
}
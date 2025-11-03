#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double eps=0;
    double s0 = 0;
    cout << "Vvedite eps: " << "eps = ";
    cin >> eps;
    int z = 1;
    for (int i=1; fabs(1.0/i>eps); i+=2, z = -z) {
        s0 += z*1.0/i;
    }
    cout << s0;
    return 0;
}
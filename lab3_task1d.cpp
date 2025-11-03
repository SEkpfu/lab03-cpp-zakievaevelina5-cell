#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for (double x=-1.5; x <=1.5; x+=0.25) {
        if (x>1) {
            cout << "\nx=" << x << "\ny=" << 1 + sqrt(abs(cos(x)));
        }
        else {
            if (x < -0.5) {
                cout << "\nx=" << x << "\ny=" << 1 - x*x;
            }
            else {
                cout << "\nx=" << x << "\ny=" << x + 1;
            }
        }
    }
    return 0;
}
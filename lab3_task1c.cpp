#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x = 0;                                                                                                                       
    double y;
    for (double x=0; x<2.0*M_PI + M_PI/6.0; x+=(M_PI/6.0)) {
        y = cos(x);
        cout << "\nx=" << x;
        cout << "\ny=" << y;
    }
    return 0;
}
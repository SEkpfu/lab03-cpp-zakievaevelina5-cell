#include <iostream>
using namespace std;

int main(){
    int t = 0;
    while (t <= 100)
    {
        cout << "Tc=" << t << endl;
        cout << "Tf=" << t*(9.0/5.0) + 32.0 << endl;
        t+=10;
    }
    return 0;
}
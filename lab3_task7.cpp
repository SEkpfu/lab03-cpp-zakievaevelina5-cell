#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,x1,y1,x,y,x0,y0;
    double p =0;
    cout << "Vvedite kol-vo uglov: ";
    cin >> n;
    cout << "Vvedite koordinaty: \nx1,y1:\n";
    cin >> x1 >> y1;
    x0=x1; y0=y1;
    for (int i= 1;i<n;i++) {
        cout << "x" << i+1 << ", y" << i+1 << ":\n";
        cin >> x >> y;
        p += sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
        x1 = x; y1 = y;
    }
    p += sqrt((x0-x1)*(x0-x1) + (y0-y1)*(y0-y1));
    cout << p;
    return 0;
}
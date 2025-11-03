#include <iostream>
using namespace std;

int main() {
    int n = 1;
    int s = 0;
    int r = 0;
    cout << "Vv posledovatelnost(0-okonchanie vvoda): ";
    while (n!=0) {
        cin >> n;
        if (n>s) {
            r = 0;
            s = n;
        }
        if (n==s) {
            r+=1;
        }
    }
    cout << "Kol-vo el ravn max: " << r;
    return 0;
}
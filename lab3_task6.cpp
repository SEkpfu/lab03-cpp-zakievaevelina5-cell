#include <iostream>
using namespace std;

int main() {
    int a;
    int m;
    int r = 0;
    int k = 0;
    string s0;
    bool pr = true;
    cout << "Vvedite chisla( * - okonchanie vvoda): ";
    s0 = a;
    while (pr) {
        cin >> s0;
        r+=1;
        if (s0 == "*") {
            pr = false;
        }
        else {
            m = stoi(s0);
            if ((m & 1) == 0) {
                k+=1;
            }
        }
    }
    cout << "Kol-vo chisel: " << r-1;
    cout << "\nKol-vo chet chisel: " << k;
    return 0;
}

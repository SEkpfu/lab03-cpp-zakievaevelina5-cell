#include <iostream>
using namespace std;

int main() {
    int n;
    string s1,s2;
    cout << "Vvedite n: ";
    cin >> n;
    for (int i = 0; i<n;i++) {
        if (i%2==0) {
            s1 += "o ";
            s2 += "* ";
        }
        else {
            s1 += "* ";
            s2 += "o ";
        }
    }
    s1 += "\n";
    s2 += "\n";
    for (int i = 1; i <= n; i++) {
        if (i%2==0) {
            cout << s2;
        }
        else {
            cout << s1;
        }
        
    }
    return 0;
}
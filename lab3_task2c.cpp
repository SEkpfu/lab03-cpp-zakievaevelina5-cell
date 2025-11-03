#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    setlocale (0, "");
    cout << "Vvedite 7 chisel: ";
    int a;
    cin >> a;
    for (int i=1; i <=7; i++){
        int x;
        cin >> x;
        if (x<a){
           a = x;}}
    cout << "Min chislo: " << a;
    return 0;

}
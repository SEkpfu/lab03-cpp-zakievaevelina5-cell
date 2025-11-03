#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale (0, "");
    int a = 0;
    cout << "Vvedite 7 chisel: ";
    for (int i=1; i <=7; i++){
        int x;
        cin >> x;
        if (x < 0){
            a += 1;}}
    cout << "Otricatelnyh chisel " << a;
    return 0;

} 
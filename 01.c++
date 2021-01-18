#include <iostream>
using namespace std;

int function(int a, int b);

int main () {
    cout << "Ola";
    int a = function(2,3);
    cout << a;
}

int function(int a, int b) {
    return a + b;
}
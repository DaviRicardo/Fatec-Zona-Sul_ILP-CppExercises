#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

double a = 0, b = 0, c = 0;

int main () {
    Repeat:
        system ("cls");
  
        cout << "======Maior valor entre três elementos======" << endl;

        cout << "\nDigite o primeiro valor (inteiro): ";
        cin >> a;

        cout << "\nDigite o segundo valor (inteiro): ";
        cin >> b;

        cout << "\nDigite o terceiro valor(inteiro):  ";
        cin >> c;

        if (a > b && a > c) {
            cout << "\nO maior valor dentre os informados é: " << a << endl;
        } else if (b > a && b > c) {
            cout << "\nO maior valor dentre os informados é: " << b << endl;
        } else if (c > a && c > b) {
            cout << "\nO maior valor dentre os informados é: " << c << endl;
        }
        system ("pause");
    goto Repeat;
    return 0; 
}
 
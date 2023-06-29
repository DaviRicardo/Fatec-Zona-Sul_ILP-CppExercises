#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    system ("cls");

    double base = 0, altura = 0, area = 0;

    cout << "======Cálculo da Área do Triângulo======" << endl;

    cout << "\nDigite a base: ";
    cin >> base;

    cout << "\nDigite a altura: ";
    cin >> altura;

    area = ((base * altura) / 2);

    cout << "\nA área do triângulo é: " << area << " cm²" << endl;
  
    system ("pause");
    return 0;
}
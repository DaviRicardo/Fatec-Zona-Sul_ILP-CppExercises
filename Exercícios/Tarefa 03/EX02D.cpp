#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#define PI 3.14
using namespace std;

int main() {
    system ("cls");

    double diametro = 0, perimetro = 0, raio = 0, area = 0;

    cout << "======Cálculo da Área de uma Esfera======" << endl;

    cout << "\nDigite o perímetro: ";
    cin >> perimetro;

    diametro = perimetro / PI;
    raio = diametro / 2;
    area = raio * raio * PI;

    cout << fixed << setprecision ( 2 );
  
    cout << "\nO área da esfera é de " << area << " cm²" << endl;
  
    system ("pause");
    return 0;
}
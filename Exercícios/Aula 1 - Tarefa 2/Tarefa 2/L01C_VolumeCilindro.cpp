#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

int main() {
    system ("cls");

    double raio = 0, altura = 0, volume = 0;

    cout << "======Cálculo de Volume do Cilindro======" << endl;

    cout << "\nInforme o raio (r): ";
    cin >> raio;

    cout << "\nInforme a altura (h): ";
    cin >> altura;

    volume = ((pi * pow(raio, 2)) * altura);

    cout << "\nO valor do volume é: " << volume << "m³" << endl;

    system ("pause");
    return 0;
}
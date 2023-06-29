#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system ("cls");

    int tempCelcius = 0;
    double tempFahrenheit = 0, calcTemp = 0;

    cout << "======Conversão de Temperatura °C > °F======" << endl;

    cout << "\nInforme a temperatura em °C: ";
    cin >> tempCelcius;

    calcTemp = ((tempCelcius * 9 + 160) / 5);
    tempFahrenheit = calcTemp;

    cout << "\nA temperatura digitada em Fahrenheit é: " << tempFahrenheit << "°F" << endl;

    system ("pause");
    return 0;
}
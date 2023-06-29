#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system ("cls");

    double temp = 0, velocidade = 0, distancia = 0, litrosUsados = 0;

    cout << "======Cálculo de Combustível Utilizado" << endl;

    cout << "\nDigite o tempo gasto na viagem (horas): ";
    cin >> temp;

    cout << "\nDigite a velocidade média de locomoção (km/h): ";
    cin >> velocidade;

    distancia = (temp * velocidade);
    litrosUsados = (distancia / 12);

    system ("cls");

    cout << "======Informações da Viagem Realizada======" << endl;

    cout << "\nVelocidade média: " << velocidade << "km/h";
    cout << "\nTempo gasto: " << temp << " hora(s)";
    cout << "\nDistância percorrida: " << distancia << "km";
    cout << "\nQuantidade de litros utilizada: " << litrosUsados << "L" << endl;
  
    system ("pause");
    return 0;
}
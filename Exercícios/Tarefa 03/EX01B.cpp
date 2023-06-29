#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    system ("cls");

    double distancia = 0, temp = 0;

    cout << "======Cálculo da Distância de um Raio======" << endl;

    cout << "\nDigite o tempo (s): ";
    cin >> temp;

    distancia = (temp * 340);

    cout << "\nA distância é de " << distancia << " metros" << endl;
  
    system ("pause");
    return 0;
}
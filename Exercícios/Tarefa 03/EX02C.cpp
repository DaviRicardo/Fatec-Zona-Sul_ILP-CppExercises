#include <iostream>
#include <math.h>
#include <string.h>
#define G 10
using namespace std;

int main() {
    system ("cls");

    double altura = 0, Tq = 0;

    cout << "======Cálculo do Tempo de Queda Livre======" << endl;

    cout << "\nDigite a altura (m): ";
    cin >> altura;

    Tq = sqrt (2 * altura / G);

    cout << "\nO Tempo de Queda (TQ) é de " << Tq << " s" << endl;
  
    system ("pause");
    return 0;
  }
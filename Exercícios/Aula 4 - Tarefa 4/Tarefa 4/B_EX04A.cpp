// A. Ler dois valores numéricos inteiros e apresentar o resultado da diferença do maior pelo menor valor.

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int a, b, diferenca;

int main() {
  system ("cls");

  Repetir:
        cout << "======Diferença entre dois valores======" << endl;

        cout << "\nDigite o primeiro valor: ";
        cin >> a;

        cout << "\nDigite o segundo valor: ";
        cin >> b;

        if (a > b) {
            diferenca = a - b;
        } else {
            diferenca = b - a;
        }

        cout << "\nA diferença dos valores informados é: " << diferenca << endl;
  
        system ("pause");
        system ("cls");
    goto Repetir;
    return 0;
}
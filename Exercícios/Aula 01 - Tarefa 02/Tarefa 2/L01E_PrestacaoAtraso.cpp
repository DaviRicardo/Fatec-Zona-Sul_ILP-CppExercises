#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system ("cls");
    
    double valor = 0, taxa = 0, temp = 0, prestacao = 0;
  
    cout << "======Cálculo de Prestação em Atraso======" << endl; 

    cout << "\nDigite o valor da prestação: ";
    cin >> valor;

    cout << "\nDigite a taxa por atraso (%): ";
    cin >> taxa;

    cout << "\nDigite o tempo de atraso (dias): ";
    cin >> temp;

    prestacao = (valor + (valor * taxa) * temp);

    cout << "\nO valor da prestação em atraso é: R$" << prestacao << endl;
  
    system ("pause");
    return 0;
}
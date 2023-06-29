#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system ("cls");
    
    double volume = 0, comprimento = 0, largura = 0, altura = 0;

    cout << "======Cálculo do volume de uma caixa retagular======" << endl;

    cout << "\nDigite o comprimento: ";
    cin >> comprimento;

    cout << "\nDigite a largura: ";
    cin >> largura;

    cout << "\nDigite a altura: ";
    cin >> altura;

    volume = (comprimento * largura * altura);

    cout << "\nO valor do volume é: " << volume << "cm³" << endl;
  
    system ("pause");
    return 0;
}
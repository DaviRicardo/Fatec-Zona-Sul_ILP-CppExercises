// G) Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3.

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int a = 0, b = 0, c = 0, d = 0, opcao = 0;

int main() {
  Repetir:
    system ("cls");

    cout << "==============Detector de números divisíveis por 2 e 3===============";
    cout << "\n* De quatro valores inteiros, descubra quais são divisíveis por 2 e 3\n";
    cout << "\nOpção 1 - Inserir números";
    cout << "\nOpção 2 - Exibir resultado ";
    cout << "\nOpção 3 - Finalizar programa\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> opcao;

    switch (opcao){
      case 1:
        cout << "\nDigite o primeiro número: ";
        cin >> a;
        cout << "\nDigite o segundo número: ";
        cin >> b;
        cout << "\nDigite o terceiro número: ";
        cin >> c;
        cout << "\nDigite o quarto número: ";
        cin >> d;
      break;
      case 2:
        if (a == 0 || b == 0 || c == 0 || d == 0) {
          cout << "\nÉ preciso informar 4 números na 1° opção antes de exibir o resultado!" << endl;
          break;
        }

        if (a % 6 == 0) {
          cout << "\n";
          cout << a << " é divisível por 2 e 3!" << endl;
        }

        if (b % 6 == 0) {
          cout << "\n";
          cout << b << " é divisível por 2 e 3!" << endl;
        }

        if (c % 6 == 0) {
          cout << "\n";
          cout << c << " é divisível por 2 e 3!" << endl;
        }
        if (d % 6 == 0 ) {
          cout << "\n";
          cout << d << " é divisível por 2 e 3!" << endl;
        }
      break;
      case 3:
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit (0);
      break;
      default:
        cout << "\nPor favor, digite apenas opções de 1 a 3!" << endl;
      break;
    }
  
    system ("pause");
  goto Repetir;
  return 0;
}
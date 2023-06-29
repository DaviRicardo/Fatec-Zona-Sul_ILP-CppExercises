#include <iostream>
#include <stdlib.h>
using namespace std;

int lerValor ();
bool imparOuPar (int number);
void calcExibFatorial (int number);
bool primoOuNao (int number);
void somaPrimos (int number);

int main () { 
  int respostaMenu, number;
  bool parImpar, primoNaoPrimo = true;

  while (respostaMenu != 6) {
    system("cls");

    cout << "Opção 1 - Inserir valor";
    cout << "\nOpção 2 - Verificação Ímpar ou Par";
    cout << "\nOpção 3 - Cálculo de Fatorial";
    cout << "\nOpção 4 - Verificação de Número Primo";
    cout << "\nOpção 5 - Soma de Números Primos";
    cout << "\nOpção 6 - Finalizar Programa\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> respostaMenu;
    
    switch (respostaMenu) {
      case 1:
        number = lerValor();
      break;
      case 2:    
        parImpar = imparOuPar(number);

        if (parImpar) {
          cout << "\n" << number << " é um número par!" << endl;
          system ("pause");
        } else {
          cout << "\n" << number << " é um número ímpar!" << endl;
          system ("pause");
        }
      break;
      case 3:
        calcExibFatorial (number);
      break;
      case 4: 
        primoNaoPrimo = primoOuNao(number);

        if (primoNaoPrimo) {
          cout << "\n" << number << " é um número primo!" << endl;
          system ("pause");
        } else {
          cout << "\n" << number << " não é um número primo..." << endl;
          system ("pause");
          }
      break;
      case 5:
        somaPrimos(number);
      break;
      case 6:
        cout << "\nFinalizando Programa..." << endl;
        system("pause");
        exit (0);

      case 7:
        cout << "\nPor favor, digite apenas opções de 1 a 6!" << endl;
        system ("pause");
      break;
    }
  }    
}

// Função de leitura
int lerValor () {
  int number;
  cout << "\n";
  cout << "\nDigite um número: ";
  cin >> number;
  return number;
}

// Início das funções de cálculo e exibição
bool imparOuPar(int number) {
  return (number % 2 == 0);
}

void calcExibFatorial (int number) {
  int i, fatorial = 1; 

  for (i = 1; i <= number; i++) {
    fatorial *= i;
  }
  cout << "\nO fatorial de " << number << " é " << number << "! = " << fatorial << endl;
  system ("pause");
}

bool primoOuNao (int number) {
  int i, div = 0;

  for (i = 1; i <= number; i++) {
    if (number % i == 0) {
      div += 1;
    }
  }
  
  if (div == 2) {
    return true;
  } else {
    return false;
  }
}

void somaPrimos (int number) {
  int i, soma = 0;
  
  for (i = 1; i <= number; i++) {
    if (primoOuNao(i)) {
      soma += i;
    } 
  }
  cout << "\nA soma de números primos entre 1 e " << number << " é de: " << soma << endl;
  system ("pause");
}


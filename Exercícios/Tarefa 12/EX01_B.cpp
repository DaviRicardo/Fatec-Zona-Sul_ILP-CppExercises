#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void principal();
int lern();
int calpar(int n);
int calimpar (int n);
void exibir(int n, int par, int impar);


int main() {
  principal();
}


void principal() {
  int n = 0, totpar = 0, totimpar = 0, tecla = 0;

  while (tecla != 4) {
    system ("cls");
    cout << "1 Ler número";
    cout << "\n2 Calcular";
    cout << "\n3 Exibir";
    cout << "\n4 Sair\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> tecla;

    switch (tecla) {
      case 1:
        n = lern();
      break;
      case 2:
        totpar = calpar(n);
        totimpar = calimpar(n);
      break;
      case 3:
        exibir (n, totpar, totimpar);
      break;
      case 4:
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit(0);
      break;
      default:
        cout << "\nPor favor, digite apenas opções de 1 a 4." << endl;
        system ("pause");
      break;
    }
  }
  return;
}

int lern() {
  int n = 0;
  cout << endl << "\nDigite um número: ";
  cin >> n;
  return n;
}

int calpar(int n) {
  int x = 0, contpar = 0;
  
  for (x = 1; x <= n; x++) {
    if (x % 2 == 0) {
      contpar += 1;
    }
  }
  return contpar;
}

int calimpar(int n) {
  int x = 0, somaimpar = 0;

  for (x = 1; x <= n; x++) {
    if (x % 2 == 1) {
      somaimpar += 1;
    }
  }
  return somaimpar;
}

void exibir (int n, int par, int impar) {
  cout << endl << "\nNúmero limite: " << n << endl;
  cout << "\nContagem de números pares: " << par << endl;
  cout << "\nContagem de números ímpares: " << impar << endl;
  system ("pause");
  return;
}
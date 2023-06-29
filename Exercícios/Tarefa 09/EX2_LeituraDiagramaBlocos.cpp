#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

// Declaração das Sub-rotinas
double ler_a ();
double ler_b ();
double ler_c ();
double cal_s (double a, double b, double c);
double cal_ah (double a, double b, double c, double s);
void exibir (double a, double b, double c, double s, double ah);


int main () {
  int tecla;
  double a, b, c, s, ah;

  Menu:
    system ("cls");

    cout << "Opção 1 - Ler";
    cout << "\nOpção 2 - Calcular";
    cout << "\nOpção 3 - Exibir";
    cout << "\nOpção 4 - Sair\n";
    cout << "\nPor favor, escolha uma das opções: ";
    cin >> tecla;

    switch (tecla) {
      case 1:
        a = ler_a ();
        b = ler_b ();
        c = ler_c ();
      break;
      case 2:
        s = cal_s (a, b, c);
        ah = cal_ah (a, b, c, s);
      break;
      case 3:
        exibir (a, b, c, s, ah);
      break;
      case 4:
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit (0);
      break;
      default:
        cout << "\nPor favor, digite apenas opções de 1 a 4." << endl;
      break;
    }
    system ("pause");
  goto Menu;
  return (0);
}


double ler_a () {
  double va;
  cout << "\nDigite A: ";
  cin >> va;
  return va;
}

double ler_b () {
  double vb;
  cout << "\nDigite B: ";
  cin >> vb;
  return vb;
}

double ler_c () {
  double vc;
  cout << "\nDigite C: ";
  cin >> vc;
  return vc;
}

double cal_s (double a, double b, double c) {
  double s;
  s = ((a + b + c) / 2);
  return s;
}

double cal_ah (double a, double b, double c, double s) {
  double ah;
  ah = sqrt(s * ((s-a) * (s-b) * (s-c)));
  return ah;
}

void exibir (double a, double b, double c, double s, double ah) {
  cout << "\nValor de A: " << a;
  cout << "\nValor de B: " << b;
  cout << "\nValor de C: " << c;
  cout << "\nValor de S: " << s;
  cout << "\nValor de AH: " << ah << endl;
}
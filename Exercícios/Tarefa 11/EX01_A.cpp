#include <iostream>
#include <stdlib.h>
using namespace std;

void controle ();
string lerNome();
double lerSal();
double calMedia (double saldo, int cont);
void exibir (string nome, double salMaior, double salMenor, int cont, double saldo, double media);

int main() {
  controle();
}

void controle() {
  string nome;
  double salario, salMaior, salMenor, saldo, media;
  int cont = 0, itemMenu = 0;

  while (itemMenu != 3) {
    system ("cls");
    cout << "1 Leitura";
    cout << "\n2 Resultados";
    cout << "\n3 Sair\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> itemMenu;

    switch (itemMenu) {
      case 1:
        salario = lerSal(); 
        
        if (cont == 0) {
          nome = lerNome();
          salMaior = salario;
          salMenor = salario;
          cont += 1;
        } else {
            cont += 1;
            saldo += salario;
            media = calMedia (saldo, cont);
          }
        
        if (salario > salMaior) {
          salMaior = salario;
        } else if (salario < salMenor) {
            salMenor = salario;
          }
      break;
      case 2:
        exibir(nome, salMaior, salMenor, cont, saldo, media);
        system ("pause");
      break;
      case 3: 
        cout << "\n";
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit (0);
      break;
      default:
        cout << "\nItem Inválido! Tente novamente." << endl;
        system ("pause");
      break;
    }
  } 
}


string lerNome() {
  string nome;
  cout << "\nDigite o nome: ";
  cin >> nome;
  return nome;
}

double lerSal() {
  double salario;
  cout << endl << "\nDigite o salário: ";
  cin >> salario;
  return salario;
}

double calMedia (double saldo, int cont) {
  double media;
  media = saldo / cont;
  return media;
}

void exibir (string nome, double salMaior, double salMenor, int cont, double saldo, double media) {
  cout << "\nNome: " << nome << endl;
  cout << "Maior Salário: " << salMaior << endl;
  cout << "Menor salário: " << salMenor << endl;
  cout << "Quantidade de salarios recebidos: " << cont << endl;
  cout << "Saldo: " << saldo << endl;
  cout << "Média Salarial: " << media << endl;
}
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void controle ();
void lerValores();
void exibir(double maiorPagamentoMenor18, double menorPagamentoMenor18, double maiorPagamentoMaior18, double menorPagamentoMaior18, int cont);

int main () {
  controle();
}

void controle () {
  int escolhaMenu = 0;
  
  while (escolhaMenu != 2) {
    system("cls");
    cout << "Opção 1 - Iniciar execução";
    cout << "\nOpção 2 - Finalizar execução\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> escolhaMenu;

    switch (escolhaMenu){
      case 1:
        lerValores();
      break;
      case 2:
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit(0);
      break;
      default:
        cout << "\nPor favor, escolha uma dentre as 2 opções." << endl;
        system ("pause");
      break;
    }
  }
}


void lerValores() {
  int vetIdades[1000], cont = 0;
  double vetPagamentos[1000], maiorPagamentoMenor18 = 0, maiorPagamentoMaior18 = 0, menorPagamentoMenor18 = -1, menorPagamentoMaior18 = 0;

  cout << "\n* Para finalizar a entrada de dados a qualquer momento digite '0'\n";
  
  for (cont = 1; cont <= 1000; cont++) {
    cout << endl << "\nDigite a " << cont << "° idade: ";
    cin >> vetIdades[cont];
    
    if (vetIdades[cont] == 0) {
      break;
    }

    cout << "\nDigite o pagamento da " << cont << "° idade: ";
    cin >> vetPagamentos[cont];

    if (vetPagamentos[cont] == 0) {
      break;
    }

    if (vetIdades[cont] < 18) {
      if (vetPagamentos[cont] > maiorPagamentoMenor18) {
        maiorPagamentoMenor18 = vetPagamentos[cont];
      } else {
          menorPagamentoMenor18 = vetPagamentos[cont];
        }  
    }

    if (vetIdades[cont] > 18) {
      if (vetPagamentos[cont] > maiorPagamentoMaior18) {
        maiorPagamentoMaior18 = vetPagamentos[cont];
      } else {
          menorPagamentoMaior18 = vetPagamentos[cont];
        }
    }
  }
  exibir (maiorPagamentoMenor18, menorPagamentoMenor18, maiorPagamentoMaior18, menorPagamentoMaior18, cont);
  system("pause");
  return;
}

void exibir (double maiorPagamentoMenor18, double menorPagamentoMenor18, double maiorPagamentoMaior18, double menorPagamentoMaior18, int cont) {
  system ("cls");
  cout << "==========Menores de 18 anos==========\n";
  cout << "\nMaior pagamento: " << maiorPagamentoMenor18 << " R$" << endl;
  cout << "\nMenor pagamento: " << menorPagamentoMenor18 << " R$" << endl;
  cout << "\n==========Maiores de 18 anos==========\n";
  cout << "\nMaior pagamento: " << maiorPagamentoMaior18 << " R$" << endl;
  cout << "\nMenor pagamento: " << menorPagamentoMaior18 << " R$" << endl;
  cout << "\n============================================" << endl;
  cout << "Quantidade total de idades e pagamentos recebidos: " << cont - 1 << endl;
}
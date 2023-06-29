/*
3. Faça um programa estruturado com menu e sub rotinas, para o seguinte caso: Um capital (ValorCapital)...
aplicado a juros (JUROS) simples durante 2anos (Periodo), sob taxa de juros de 5% ao mês, gerou um montante
(Montante) de R$ 26.950,00. Determine o valor do capital aplicado. 
*/

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

double const capital = 26950, taxaJuros = 0.05;

// Declaração das Sub-rotinas
double calcularCapital ();
void exibir (double resultado);


int main () {
  double capitApli;
  int tecla;
  
  Menu:
    system ("cls");

    cout << "Opção 1 - Executar";
    cout << "\nOpção 2 - Finalizar\n";
    cout << "\nPor favor, escolha uma das opções: ";
    cin >> tecla;

    switch (tecla) {
      case 1:
        capitApli = calcularCapital ();
        exibir (capitApli);
      break;
      case 2:
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit (0);
        break;
      default:
        cout << "\nPor favor, digite apenas opções de 1 a 2." << endl;
      break;
    }
    system ("pause");
  goto Menu;
  return (0);
}

double calcularCapital () {
  double capitalAplicado, juros;
  juros = (capital * taxaJuros * 2);
  capitalAplicado = capital - juros;
  return capitalAplicado;
}

void exibir (double resultado) {
  cout << "\nO valor do capital aplicado é: R$ " << resultado << endl;
  return;
}


#include <iostream>
#include <stdlib.h>
using namespace std;

void controle();
string lerSexo();
double lerSalario();
double calcMediaHomem (double saldoHomem, int contadorHomem);
double calcMediaMulher (double saldoMulher, int contadorMulher);
void exibir (double saldoHomem, double saldoMulher, double mediaHomem, double mediaMulher, int contadorHomem, int contadorMulher);

int main () {
  controle();
}

void controle () {
  string sexo = " ";
  double salarioHomem = 0, salarioMulher = 0, saldoHomem = 0, saldoMulher = 0, mediaHomem = 0, mediaMulher = 0;
  int escolhaMenu = 0, contadorHomem = 0, contadorMulher = 0;
  
  while (escolhaMenu != 3) {
    system ("cls");
    cout << "Opção 1 - Inserir Salários";
    cout << "\nOpção 2 - Exibir Resultados";
    cout << "\nOpção 3 - Finalizar Execução\n";
    cout << "\nPor favor, selecione uma opção: ";
    cin >> escolhaMenu;

    switch (escolhaMenu) {
      case 1:
        sexo = lerSexo();
        if (sexo == "M" || sexo == "m") {
          salarioHomem = lerSalario();
          saldoHomem += salarioHomem;
          contadorHomem += 1;
          mediaHomem = calcMediaHomem (saldoHomem, contadorHomem);
        } else if (sexo == "F" || sexo == "f") {
            salarioMulher = lerSalario();
            saldoMulher += salarioMulher;
            contadorMulher += 1;
            mediaMulher = calcMediaMulher(saldoMulher, contadorMulher);
          } 
      break;
      case 2:
        exibir(saldoHomem, saldoMulher, mediaHomem, mediaMulher, contadorHomem, contadorMulher);
        system ("pause");
      break;
      case 3:
        cout << "\nFinalizando programa.." << endl;
        system ("pause");
        exit (0);
      break;
      default:
        cout << "\nPor favor, digite apenas opções de 1 a 3." << endl;
        system ("pause");
      break;
    }
  }
}


string lerSexo() {
  string sexo;
  cout << endl << "\nDigite o sexo desejado (f / m): ";
  cin >> sexo;

  while (sexo != "F" && sexo != "f" && sexo != "M" && sexo != "m") {
    cout << "\nSexo inválido, digite novamente!: ";
    cin >> sexo;

  }
  return sexo;
}

double lerSalario() {
  double salario;
  cout << "\nDigite o salário: ";
  cin >> salario;
  return salario;
}

double calcMediaHomem (double saldoHomem, int contadorHomem) {
  double media;
  media = saldoHomem / contadorHomem;
  return media;
}

double calcMediaMulher(double saldoMulher, int contadorMulher) {
  double media;
  media = saldoMulher / contadorMulher;
  return media;
}

void exibir (double saldoHomem, double saldoMulher, double mediaHomem, double mediaMulher, int contadorHomem, int contadorMulher) {
  cout << endl << "\nSexo: Homem" << endl;
  cout << "Saldo: " << saldoHomem << endl;
  cout << "Média Salarial: " << mediaHomem << endl;
  cout << "Quantidade de Salários Recebidos: " << contadorHomem << endl;
  cout << "\n==========================================\n";
  cout << "\nSexo: Mulher" << endl;
  cout << "Saldo: " << saldoMulher << endl;
  cout << "Média Salarial: " << mediaMulher << endl;
  cout << "Quantidade de Salários Recebidos: " << contadorMulher << endl;
  return;
}

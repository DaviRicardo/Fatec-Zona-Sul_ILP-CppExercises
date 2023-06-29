#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Declaração de variáveis globais
double taxaMulta = 0.02;
int escolhaMenu;
string respostaRepetir = "s";

// Declaração de Sub-rotinas
double lerPrestacao();
int lerAtrasoDias();
double calculoMulta (double prestacao);
double calculoJuros (double prestacao, int diasEmAtraso);
double valorPagar (double prestacao, double multa, double juros);
void exibir(double valorFinal);

int main() {
  double prestacao, multa, juros, valorTotal;
  int diasEmAtraso;
  
  while (respostaRepetir != "n") {
    system ("cls");
    cout << "Opção 1 - Inicializar programa";
    cout << "\nOpção 2 - Finalizar programa\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> escolhaMenu;

    switch (escolhaMenu) {
      case 1:
        prestacao = lerPrestacao();
        diasEmAtraso = lerAtrasoDias();
        multa = calculoMulta (prestacao);
        juros = calculoJuros (prestacao, diasEmAtraso);
        valorTotal = valorPagar (prestacao, multa, juros);
        exibir (valorTotal);
      break;
      case 2:
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit(0);
        break;
      default:
        cout << "\n";
        cout << "\nPor favor, digite apenas opções de 1 a 2." << endl;
        system ("pause");
      break;
    }
    cout << "\n";
    cout << "\nDeseja continuar a execução? (s / n): ";
    cin >> respostaRepetir;
  }
}


// Início de funções de leitura
double lerPrestacao () {
  double valorPrestacao;
  cout << endl << "\nDigite o valor da prestação (R$): ";
  cin >> valorPrestacao;
  return valorPrestacao;
}

int lerAtrasoDias () {
  int diasAtrasados;
  cout << "\nDigite a quantidade de dias atrasados: ";
  cin >> diasAtrasados;
  return diasAtrasados;
}

// Início de funções de cálculo
double calculoMulta (double prestacao) {
  double valorMulta;
  valorMulta = taxaMulta * prestacao;
  return valorMulta;
}

double calculoJuros (double prestacao, int diasEmAtraso) {
  double valorJuros, jurosSobreDiasAtraso;
  jurosSobreDiasAtraso = diasEmAtraso * 0.033; // 0,033 =  1% juros / 30 dias
  valorJuros = jurosSobreDiasAtraso * prestacao;
  return valorJuros;
}

double valorPagar (double prestacao, double multa, double juros) {
  double valor;
  valor = prestacao + multa + juros;
  return valor;
}

// Função de exibição
void exibir (double valorFinal) {
  cout << "\n======================================";
  cout << "\nValor total a ser pago: " << valorFinal << " R$";
  return;
}
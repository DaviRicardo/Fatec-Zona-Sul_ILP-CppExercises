#include <iostream>
#include <stdlib.h>
using namespace std;

// Declaração de Sub-rotinas
void controle();
int lerInicInteImpa(); // Lê o primeiro valor do intervalo A e B
int lerFimInteImpa(); // Lê o último valor do intervalo A e B
int somaImpares(int a, int b);
int lerFatorial();
double calculoFatorial(int numFatorial);
void exibResuFato (int num, double calcFatorial);
void exibResuSomaImpa (int soma, int a, int b);

int main() {
  controle();
}

void controle () {
  int escolhaMenu = 0, soma = 0, a = 0, b = 0;
  double numFatorial = 0, calcFatorial = 0;

  while (escolhaMenu != 3) {
    system ("cls");
    cout << "Opção 1 - Soma de Ímpares";
    cout << "\nOpção 2 - Cálculo de Fatorial";
    cout << "\nOpção 3 - Finalizar programa\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> escolhaMenu;

    switch (escolhaMenu) {
      case 1:
        a = lerInicInteImpa();
        b = lerFimInteImpa();
        soma = somaImpares(a, b);
        exibResuSomaImpa(soma, a, b);
      break;   
      case 2:
        numFatorial = lerFatorial();
        calcFatorial = calculoFatorial(numFatorial);
        exibResuFato(numFatorial, calcFatorial);   
      break;
      case 3:
        cout << "\nFinalizando programa..." << endl;
        system("pause");
        exit(0);
      break;
      default:
        cout <<"\nPor favor, digite apenas opções de 1 a 3." << endl;
        system ("pause");
      break;
    }
  }
}

// Início das funções de leitura
int lerInicInteImpa() {
  int a = 0;
  cout << endl << "\nDigite o primeiro valor de um interavalo de números: ";
  cin >> a;
  return a;
}

int lerFimInteImpa() {
  int b = 0;
  cout << "\nDigite agora o último valor: ";
  cin >> b;
  return b;
}

int lerFatorial() {
  int num = 0;
  cout << endl << "\nDigite um número para ver o seu fatorial: ";
  cin >> num;
  return num;
}

// Início das funções de cálculo
int somaImpares(int a, int b) {
  int i, soma = 0;
  
  for (i = a; i <= b; i++) {
    if (i % 2 == 1) {
      soma += i;
    }
  }
  return soma;
}

double calculoFatorial(int numFatorial) {
  int i;
  double fatorial = 1;
  
  for (i = 1; i <= numFatorial; i++) {
    fatorial *= i;
  }
  return fatorial;
}

// Início das funções de exibição
void exibResuFato (int num, double calcFatorial) {
  cout << "\nO fatorial de " << num << " é: " << num << "! = " << calcFatorial << endl;
  system ("pause");
}

void exibResuSomaImpa(int soma, int a, int b) {
  cout << "\nA soma de números ímpares encontrados no intervalo entre " << a << " e " << b << " é de: " << soma << endl;
  system ("pause");
}



// H) Efetuar a leitura de cinco números inteiros e identificar o maior e o menor valores.

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int opcao = 0, contador, vet[6], maiorValor = 0, menorValor = 0;

int main() {
  Repetir:
    system ("cls");

    cout << "===================Maior & Menor valor==================";
    cout << "\n* De 5 valores inteiros descubra qual é o maior e menor.\n";
    cout << "\nOpção 1 - Inserir números";
    cout << "\nOpção 2 - Exibir resultado ";
    cout << "\nOpção 3 - Finalizar programa\n";
    cout << "\nPor favor, escolha uma opção: ";
    cin >> opcao;
  
    switch (opcao){
      case 1:
        for (contador = 1; contador <=5; contador ++){
          cout << "\n";
          cout << "Digite o " << contador << "° valor: ";
          cin >> vet[contador];
        } 
      break;
      case 2:
        if (vet[1] == 0 || vet[2] == 0 || vet[3] == 0 || vet[4] == 0) {
          cout << "\nÉ preciso inserir todos os números antes de exibi-los!" << endl;
          system ("pause");
          break; 
        }
        // Bloco condicional para verificar qual o maior valor
        if (vet[1] > vet[2] && vet[1] > vet[3] && vet[1] > vet[4] && vet[1] > vet[5]) {
          maiorValor = vet[1];
        } else if (vet[2] > vet[1] && vet[2] > vet[3] && vet[2] > vet[4] && vet[2] > vet[5]){
        maiorValor = vet[2];
        } else if (vet[3] > vet[1] && vet[3] > vet[2] && vet[3] > vet[4] && vet[3] > vet[5]){
        maiorValor = vet[3];
        } else if (vet[4] > vet[1] && vet[4] > vet[2] && vet[4] > vet[3] && vet[4] > vet[5]){
        maiorValor = vet[4];
        } else if (vet[5] > vet[1] && vet[5] > vet[2] && vet[5] > vet[3] && vet[5] > vet[4]){
        maiorValor = vet[5];
        }
        
        // Bloco condicional para verificar qual o menor valor
        if (vet[1] < vet[2] && vet[1] < vet[3] && vet[1] < vet[4] && vet[1] < vet[5]){
        menorValor = vet[1];
        } else if (vet[2] < vet[1] && vet[2] < vet[3] && vet[2] < vet[4] && vet[2] < vet[5]){
        menorValor = vet[2];
        } else if (vet[3] < vet[1] && vet[3] < vet[2] && vet[3] < vet[4] && vet[3] < vet[5]){
        menorValor = vet[3];
        } else if (vet[4] < vet[1] && vet[4] < vet[2] && vet[4] < vet[3] && vet[4] < vet[5]){
        menorValor = vet[4];
        } else if (vet[5] < vet[1] && vet[5] < vet[2] && vet[5] < vet[3] && vet[5] < vet[4]){
        menorValor = vet[5];
        }
      
        cout << "\nMaior Valor: " << maiorValor;
        cout << "\nMenor Valor: " << menorValor << endl;
      break;
      case 3:
        cout << "\nFinalizando programa..." << endl;
        system ("pause");
        exit (0);
      break;
      default:
        cout << "\nPor favor, digite apenas opções de 1 a 3!" << endl;
        system ("pause");
      break;
    }
    system ("pause");
  goto Repetir;
  return 0;
}



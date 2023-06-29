#include <iostream>
#include <cstdlib>
using namespace std;

double const txmulta = 0.02;

// Quadro resumo das Sub-rotinas
double lerValor();
double calcMulta (double valorPrest);
void mostrar (double val, double multa);

int main() {
  double valorPrest, valorMulta; 
  int tecla;
  
  MENU:
    system("cls"); 
  
    cout << "Menu\n1 Executar\n2 Sair\n\nItem: ";
    cin >> tecla;
  
    switch(tecla) {    
      case 1: 
        valorPrest = lerValor();    
        valorMulta = calcMulta(valorPrest);
        mostrar (valorPrest, valorMulta);
      break;
      case 2: 
        cout << "\nFim do programa!" << endl;  
        system("pause");
        exit(0); 
      break;   
    }  
  goto MENU; 
  return 0; 
}

// Função de leitura 
double lerValor () { 
  double val;   
  cout << "\nDigite a prestação: ";   
  cin >> val;  
  return val; 
}

// Função para calcular a multa
double calcMulta (double valorPrest){
  double valorMulta = valorPrest * txmulta;
  return (valorMulta); 
} 

// Tipo void para mostrar o valor final
void mostrar (double val, double multa) {   
  double valorFinal = (val + multa);  
  cout << "\nValor a pagar: " << valorFinal << endl;
  system("pause");
  return;
}
#include <iostream>
#include <stdlib.h>
using namespace std;

void exibirPar (int X, int Y);

int main ( ) { 
  system ("cls");

  int a, b; 

  cout << "Digite X: "; 
  cin >> a;
  cout << "Digite Y: "; 
  cin >> b; 
  
  exibirPar (a, b);
  return 0; 
}


void exibirPar(int X, int Y) { 
  int cont = 0;
  
  for (int i = X; i <= Y; i++) {    
    if (i % 2 == 0) { 
      cont += 1;
    }
    
    if (cont == 10) {
      cout << i << endl; 
      cont++;
    }
  } 
}


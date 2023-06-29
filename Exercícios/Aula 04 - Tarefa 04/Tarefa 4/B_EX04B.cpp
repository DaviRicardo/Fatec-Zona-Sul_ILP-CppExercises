/* 
B. Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um valor positivo, 
ou seja, o programa deverá apresentar o módulo de um número fornecido. 
Lembre-se de verificar se o número fornecido é menor que zero; sendo, multiplique-o por -1. 
*/

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int a, modulo;

int main() {
    system ("cls");

    Repetir:
        cout << "======Módulo de um número inteiro======" << endl;

        cout << "\nDigite um valor inteiro: ";
        cin >> a;
    
        if (a < 0){
            modulo = (a * (-1));
        } else {
            modulo = a;
        }

        cout << "\nO módulo do valor informado é: " << modulo << endl;
  
        system ("pause");
        system ("cls");
    goto Repetir; 
    return 0;
}
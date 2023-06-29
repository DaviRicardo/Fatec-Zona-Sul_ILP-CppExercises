#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

char sexo; 
string msg;

int main() {
    system ("cls");

    Repetir: 
        cout << "Digite o sexo (f/m): ";
        cin >> sexo;

        if (sexo == 'f'){
            msg = "\nVocê é uma mulher!";
        } else {
            msg = "\nVocê é um homem!";
        }

        cout << msg << endl;
  
        system ("pause");
        system("cls");
    goto Repetir; 
    return 0;
}
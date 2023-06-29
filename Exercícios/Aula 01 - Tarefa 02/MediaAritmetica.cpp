#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    system ("cls");
    
    double nota1 = 0, nota2 = 0, media;
    
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    
    cout << "\nDigite a segunda nota: ";
    cin >> nota2;

    media = ((nota1 + nota2) / 2);

    cout << "\nA média aritmética das notas informadas é: " << media << endl; 

    system ("pause"); 
    return 0; 
}
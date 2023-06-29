#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;

double a = 0, b = 0, c = 0;
string tipoTriangulo = " ";

int main () {
    Repetir:
        system ("cls");
  
        cout << "|=====É um triângulo? Qual o seu tipo?======" << endl;
        cout << "\n|Digite três valores inteiros e positivos para cada lado do triângulo para descobrir|" << endl;

        cout << "\nPrimeiro valor: ";
        cin >> a;

        cout << "\nSegundo valor: ";
        cin >> b;

        cout << "\nTerceiro valor: ";
        cin >> c;

        // Verificação do tipo do triângulo com base na congruência de lados.
        if (a == b && a == c){
            cin.ignore(); 
            tipoTriangulo = "Triângulo Equilátero";
        } else if (a == b || a == c){
            cin.ignore(); 
            tipoTriangulo = "Triângulo Isósceles";
        } else if (a != b && a != c){
            cin.ignore(); 
            tipoTriangulo = "Triangulo Escaleno";
        }

        // Verificação se a figura é ou não um triângulo.
        if (a >= (b + c) || b >= (a + c) || c >= (b + a)) {
            cout << "\nLamento, mas a figura não caracteriza um Triângulo. Tente novamente." << endl;
        } else {
            cout << "\n";
            cout << "\nÉ um triângulo!" << endl;
            cout << "\nE o seu tipo é: " << tipoTriangulo << endl;
        }
        system ("pause");
    goto Repetir;
    return 0; 
}
 
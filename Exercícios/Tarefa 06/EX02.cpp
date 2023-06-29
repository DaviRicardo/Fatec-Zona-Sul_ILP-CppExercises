#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

double a = 0, b = 0, c = 0, p = 0, areaTriangulo = 0;
bool triangulo = false;
int tecla = 0;

int main () {
    Repeat:
        system ("cls");

        cout << "Opção 1 - Ler e Exibir";
        cout << "\nOpção 2 - Sair\n";
        cout << "\nItem: ";
        cin >> tecla;

        switch (tecla) {
            case 1:
                cout << "\nDigite o valor de a: ";
                cin >> a;

                cout << "\nDigite o valor de b: ";
                cin >> b;

                cout << "\nDigite o valor de c: ";
                cin >> c;
      
                if (a < (b + c) && b < (a + c) && c < (a + b)) {
                    triangulo = true;
                } else {
                triangulo = false;
                }
      
                if (triangulo == true) {
                    // Teorema de Heron
                    p = ((a + b + c) / 2); // p = semiperímetro
                    areaTriangulo = sqrt (p * ((p - a) * (p - b) * (p - c)));

                    cout << "\n";
                    cout << "\nTrata-se de um Triângulo!\n";
                    cout << "\nE sua área é: " << fixed << setprecision(2) << areaTriangulo << " m²" << endl; 
                } else {
                    cout << "\nUma figura qualquer de três lados" << endl;
                }   
            break;
            case 2:
                cout << "\nFinalizando programa..." << endl;
                system ("pause");
                exit (0);
            break;
            default:
                cout << "\nPor favor, digite uma opção de 1 a 2!" << endl;
                system ("pause");
            break;
        }
        system ("pause");
    goto Repeat;
    return 0;
} 
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int numLados = 0;
double medLado = 0, p = 0, a = 0, areaTriangulo = 0, areaQuadrado = 0, areaPentagono = 0;  // p = semiperímetro | a = apótema

int main () {
    Repeat:
        system ("cls");
  
        cout << "======Cálculo da Área de um Polígono Regular======" << endl;

        cout << "\nDigite o número de lados: ";
        cin >> numLados;

        cout << "\nDigite a medida do lado: ";
        cin >> medLado;

        if (numLados < 3) {
            system ("clear");
            cout << "Não é um polígono. Os mesmos existem a partir de 3 lados." << endl;
        } else if (numLados > 5) {
            system ("clear");
            cout << "Polígono não identificado." << endl;
        }
        
        switch (numLados) {
            case 3:
                system ("cls");
                cout << "O polígono regular correspondente ao número de lados informados é: Triângulo Equilátero" << endl;
                // Teorema de Heron
                p = ((medLado * 3) / 2); // p = semiperímetro
                areaTriangulo = sqrt (p * ((p - medLado) * (p - medLado) * (p - medLado)));

                cout << "\nA área do triângulo é: " << fixed << setprecision(2) << areaTriangulo << " m²" << endl;
            break;
            case 4:
                system ("cls");
                cout << "O polígono regular correspondente ao número de lados informados é: Quadrado" << endl;
      
                areaQuadrado = pow(medLado, 2);  
      
                cout << "\nA área do quadrado é: " << areaQuadrado << " cm²" << endl;
            break;
            case 5:
                system ("cls");
                cout << "O polígono regular correspondente ao número de lados informados é: Pentágono" << endl;

                p = ((medLado * 5) / 2);
                a = ((medLado / 2) / 0.726);
                areaPentagono = p * a;

                cout << "\nA área do pentágono é: " << fixed << setprecision(1) << areaPentagono << " cm²" << endl;
            break;
        }

        system ("pause");
    goto Repeat;
    return 0; 
}

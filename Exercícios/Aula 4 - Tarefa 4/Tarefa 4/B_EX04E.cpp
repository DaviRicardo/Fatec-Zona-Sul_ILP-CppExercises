#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

double a, b, c, delta, x1, x2;

int main() {
    Repetir: 
        system("cls");

        cout << "======Cálculo de Equação do 2° Grau=====" << endl;
        cout << "\nDigite o valor de a (x²): ";
        cin >> a;

        if (a != 0) {
            cout << "\nDigite o valor de b ([valor]x): ";
            cin >> b;

            cout << "\nDigite o valor de c: ";
            cin >> c;

            delta = (pow(b, 2) - 4 * a * c);
        
            if (delta >= 0) {
                x1 = ((-1) * b + sqrt(delta)) / (2 * a);
                x2 = ((-1) * b - sqrt(delta)) / (2 * a);

                cout << "\nTemos como raízes: x¹ = " << x1 << " | x² = " << x2 << endl;
            } else {
                cout << "\nA equação não possui raízes reais." << endl;
            }
            system("pause");
        } else {
            cout << "\nO valor de 'a' precisa ser diferente de 0!" << endl;
            system("pause");
        }
    goto Repetir; 
    return 0;
}

#include <iostream>
#include <math.h>
#include <cstdlib> 
#include <string.h>
using namespace std;

double a, b, c, delta, x1, x2;
int opcaoMenu;

int main() {
    Repetir: 
        system ("cls");
        cout << "|=====Cálculo de Equação do 2° Grau=====|";
        cout << "\n|=====Opção 1 - Entrada de dados========|";
        cout << "\n|=====Opção 2 - Exibir dados============|";
        cout << "\n|=====Opção 3 - Sair do programa========|\n";
        cout << "\nEscolha uma opção: "; 
        cin >> opcaoMenu;

        switch (opcaoMenu) {
            case 1:
                cout << "\nDigite o valor de a (x²): ";
                cin >> a;

                if (a != 0) {
                    cout << "\nDigite o valor de b ([valor]x): ";
                    cin >> b;
      
                    cout << "\nDigite o valor de c: ";
                    cin >> c;
      
                    delta = (pow(b,2) - 4 * a * c);
                } else {
                    cout << "\nO valor de 'a' precisa ser diferente de 0!" << endl;
                    system ("pause");
                }      
            break;
            case 2: 
                if (! (a != 0 || b != 0 || c != 0)) {
                    cout << "\nÉ preciso atribuir valores na 1° Opção antes de exibi-los!" << endl;
                    system ("sleep 6");
                    break;
                }
      
                if (delta >= 0) {
                    x1 = ((-1 * b + sqrt(delta)) / (2 * a));
                    x2 = ((-1 * b - sqrt (delta)) / (2 * a));

                    cout << "\n";
                    cout << "A: " << a << " | B: " << b << " | C: " << c;
                    cout << "\nDelta: " << delta;
                    cout << "\nTemos como raízes: x¹ = " << x1 << " | x² = " << x2 << endl;

                    system("pause");
                } else if (delta < 0) {
                    cout << "\n";
                    cout << "A: " << a << " | B: " << b << " | C: " << c;
                    cout << "\nDelta: " << delta << "\n";
                    cout << "\nSem solução no conjunto dos números Reais!\n";
                    cout << "\nComo o valor de delta é negativo, não há raízes." << endl;

                    system ("pause");
                } 
            break;
            case 3:
                cout << "\nFinalizando programa..." << endl;
                system ("pause");
                exit (0);
            break;
            default:
                cout << "\nPor favor, digite uma opção de 1 a 3!" << endl;
                system("pause");
            break;
        }
    goto Repetir;
    return 0;
}
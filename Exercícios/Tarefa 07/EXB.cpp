/* 
B) Fazer quadro resumo e o código fonte - Utilize o algoritmo de troca de valores 
para exibir em ordem crescente os quatro números lidos, N1, N2, N3 e N4.
*/

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int n1 = 0, n2 = 0, n3 = 0, n4 = 0, opcao = 0, trocaVar = 0;

int main() {
    Repetir:
        system ("cls");

        cout << "==========================Ordem Crescente=========================";
        cout << "\n* Informe 4 valores inteiros para visualiza-los em ordem crescente.\n";
        cout << "\nOpção 1 - Inserir números";
        cout << "\nOpção 2 - Exibir resultado ";
        cout << "\nOpção 3 - Finalizar programa\n";
        cout << "\nPor favor, escolha uma opção: ";
        cin >> opcao;
  
        switch (opcao) {
            case 1:
                cout << "\nDigite o 1° valor: ";
                cin >> n1;

                cout << "\nDigite o 2° valor: ";
                cin >> n2;

                cout << "\nDigite o 3° valor: ";
                cin >> n3;

                cout << "\nDigite o 4° valor: ";
                cin >> n4;
      
                for (int contador = 1; contador <=6; contador++) {
                    if (n2 < n1) {
                        trocaVar = n2;
                        n2 = n1;
                        n1 = trocaVar;
                    } else if (n3 < n2) {
                        trocaVar = n3;
                        n3 = n2;
                        n2 = trocaVar;
                    } else if (n4 < n3) {
                        trocaVar = n4;
                        n4 = n3;
                        n3 = trocaVar;
                    }
                }
            break;
            case 2:
                if (n1 == 0 || n2 == 0 || n3 == 0 || n4 == 0) {
                    cout << "\nÉ preciso inserir todos os números antes de exibi-los!" << endl;
                    system ("pause");
                    break;   
                }

                cout << endl << n1;
                cout << "\n";
                cout << n2;
                cout << "\n";
                cout << n3;
                cout << "\n";
                cout << n4;
                cout << "\n";
            break;
            case 3:
                cout << "\nFinalizando programa..." << endl;
                system ("pause");
                exit (0);
                break;
            default:
                cout << "\nPor favor, digite apenas opções de 1 a 3!" << endl;
            break;
    
        }
        system ("pause");
    goto Repetir;
    return 0;
}



/*
C) Ano Bissexto: O usuário deverá digitar um ano qualquer e o programa deverá exibir uma mensagem informando...
se o Ano digitado é bissexto ou se não é bissexto; (crie variáveis do tipo inteiro e crie uma variável...
do tipo string para armazenar a mensagem, use a função mod). (Select Case e Menu repetitivo. Atenção, este programa terá apenas 4 IFS.)
*/

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
using namespace std;

int ano = 0, opcao = 0;
string mensagem = " ";

int main() {
    Repetir:
        system ("cls");

        cout << "=====================Cálculo de Ano Bissexto=====================";
        cout << "\n* Informe um ano para saber se o mesmo é um ano bissexto ou não.\n";
        cout << "\nOpção 1 - Inserir números";
        cout << "\nOpção 2 - Exibir resultado ";
        cout << "\nOpção 3 - Finalizar programa\n";
        cout << "\nPor favor, escolha uma opção: ";
        cin >> opcao;
  
        switch (opcao) {
            case 1:
                cout << "\nInsira um ano: ";
                cin >> ano;

                if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                    mensagem = " é um ano bissexto (tem 366 dias)!";
                } else {
                    mensagem = " não é um ano bissexto (tem 365 dias).";
                }
                //system ("pause");
            break;
            case 2:
                if (ano == 0) {
                    cout << "\nÉ preciso inserir um ano antes de exibir o resultado!" << endl;
                    //system ("pause");
                    break;   
                }

                cout << "\nO ano " << ano << mensagem << endl;
            break;
            case 3:
                cout << "\nFinalizando programa..." << endl;
                //system("pause");
                exit (0);
            break;  
            default:
                cout << "\nPor favor, digite apenas opções de 1 a 3!" << endl;
                //system("pause");
            break;
    
        }
        system ("pause");
    goto Repetir;
    return 0;
}



#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

string aluno, mensagem;
double mediaG, nom1, nom2, faltas;

int main () {
    int itemMenu;
  
    Menu: 
        system("cls");
        cout << "***Menu de Controle***";
        cout << "\n1 Ler dados de entrada";
        cout << "\n2 Listar resultados";
        cout << "\n3 Sair\n\nItem: ";
        cin >> itemMenu;
  
        switch (itemMenu) {
            case 1: 
                system("cls");
                cout << "Digite Nome:";
                cin.ignore();
                getline (cin, aluno);

                cout << "\nDigite nota 1: ";
                cin >> nom1;

                cout << "\nDigite a nota 2: ";
                cin >> nom2;
    
                cout << "\nDigite as faltas: ";
                cin >> faltas;
    
                if ( nom1 <0 || nom2 <0 || faltas < 0) {
                    cout << "Erro! Notas e faltas devem ser positivas!" << endl;
                    system("pause" );
                }
 
                mediaG = sqrt (nom1 * nom2);
 
                if (faltas > 20) {
                    mensagem = "Reprovado por faltas.";
                } else if (mediaG < 3) {
                    mensagem = "Reprovado por notas.";
                } else if (mediaG >= 3 && mediaG < 5) {
                    mensagem = "Aluno de recuperação.";
                } else if (mediaG >= 5 && mediaG < 6) {
                    mensagem = "Aluno de exame.";
                } else {
                    mensagem = "Aluno aprovado.";
                } 
            break;
            case 2: 
                cout << "\n***Tela de Saída***";
                cout << "\nAluno: " << aluno;
                cout << "\nMédia: " << fixed << setprecision(2) << mediaG;
                cout << "\nStatus: " << mensagem << endl;
    
                system("pause");
            break;  
            case 3: 
            exit(0); 
            break;
        }
    goto Menu;
 return 0; 
}
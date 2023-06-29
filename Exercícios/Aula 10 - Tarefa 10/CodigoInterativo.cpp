#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;

// Declaração das Sub-rotinas
string lerNome();
double lerPgto();
double getMedia();
void resultados (string nome, int cont, double saldo, double media);
void controle();

int main() {
    controle();
    return 0;
}


string lerNome() { 
    string nome;
    cout << "\nDigite o nome: ";
    getline(cin, nome);
    return nome;
}

double lerPgto() {
    double pgto;
    cout << "\nDigite o valor do pgto: ";
    cin >> pgto;
    return pgto;
}

double getMedia (int cont, double saldo) {
    double media;
    media = saldo / cont;
    return media;
}

void resultados (string nome, int cont, double saldo, double media) {
    system("cls");
    cout << "Tela de Saída\n";
    cout << "\nNome......: " << nome;
    cout << "\nQuantidade: " << cont;
    cout << "\nSaldo.....: " << saldo;
    cout << "\nMédia.....: " << media << endl;
    system("pause");
}

void controle() {
    string nome;
    int cont = 0, itemMenu = 0;
    double saldo = 0, media = 0, pgto = 0;
    
    while (true) {
        system("cls");
        cout << "Menu de Controle";
        cout << "\n1 Pagamentos";
        cout << "\n2 Resultados";
        cout << "\n3 sair\n\nItem: ";
        cin >> itemMenu;
        
        if (itemMenu == 1) {
            if (cont == 0) {   
                cin.ignore();
                nome = lerNome();
            }
            
            pgto = lerPgto();
            saldo += pgto; 
            cont ++;
            media = getMedia(cont, saldo);
        } else if (itemMenu == 2) {
            resultados (nome, cont, saldo, media);
        } else if (itemMenu == 3) {
            system("cls");
            cout << "O programa foi finalizado!" << endl;
            system("pause");
            exit(0); 
        }
    }
}

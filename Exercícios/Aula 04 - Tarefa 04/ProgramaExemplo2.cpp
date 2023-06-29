#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

double n1, n2, media; 
string status;

int main() {
    system ("cls");

    Repetir: 
        cout << "Ler Notas 1 e 2 separadas por enter: ";
        cin >> n1; 
        cin >> n2;

        media = (n1 + n2) / 2;

        if (media < 3) {
            status = "\nALUNO REPROVADO!";
        } else if (media >= 3 && media < 5) {
            status = "\nALUNO DE RECUPERAÇÃO";
        } else if (media >= 5 && media < 6) {
            status = "\nALUNO DE EXAME!";
        } else {
            status = "\nALUNO APROVADO!";
        }

        cout << endl << "\nA média do aluno foi: " << media;
        cout << endl << status << endl << endl;
  
        system ("pause");
        system("cls");
    goto Repetir; 
    return 0;
}
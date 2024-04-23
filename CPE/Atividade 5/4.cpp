#include <iostream>
#include <cstdlib>

using namespace std;

string resposta;
int n1, n2;

int pergunta() {
        int n1 = rand() % 51;
        int n2 = rand() % 51;

        cout << "Quanto e " << n1 << " vezes " << n2 << "?" << endl;

        return n1 * n2;
}

int main() {

    int tentativa, resultado;

    while (resposta != "N") {
        cout << "Quer fazer uma multiplicacao? S/N "<< endl;
        cin >> resposta;

        if (resposta == "S") {
                resultado = pergunta();
                cin >> tentativa;

                while (tentativa != resultado) {
                cout << "Resposta incorreta. Tente novamente." << endl;
                cin >> tentativa;
                
            }

            cout << "Bom trabalho! Resposta correta." << endl;
        } else if (resposta == "N") {
            cout << "Ok, adeus!" << endl;
            return 0;
        } else {
            cout << "Resposta inesperada" << endl;
        }
    }
    
    return 0;
}

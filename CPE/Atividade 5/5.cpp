#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int num, palpite;
    string resposta;

    do {
        num = rand() % 1000;
        cout << "Eu escolhi um numero de 0 a 1000, tente adivinha-lo" << endl;
        
        do {
            cin >> palpite;
            if (palpite < num) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else if (palpite > num) {
                cout << "Muito alto. Tente novamente." << endl;
            }
        } while (palpite != num);

        cout << "Excelente! Voce adivinhou o numero! Voce gostaria de jogar novamente (s ou n)?" << endl;
        cin >> resposta;
    } while (resposta == "s");

    return 0;
}
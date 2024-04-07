#include <iostream>

using namespace std;

int main() {
    float km, litros, kmt, litrost, media;
    char resposta;

    while (true) {
        cout << "Quantos km voce percorreu com esse tanque? : " << endl;
        cin >> km;
        cout << "Com quantos litros voce encheu esse tanque? : " << endl;
        cin >> litros;
        
        cout << "Deseja inserir mais dados? (s/n): " << endl;
        cin >> resposta;

        kmt = kmt + km;
        litrost = litrost + litros;

        if (resposta == 'n' || resposta == 'N') {
            break;
        } else if (resposta == 's' || resposta == 'S') { 
            kmt = kmt + km;
            litrost = litrost + litros;
        } else {
            cout << "voce deu uma resposta inesperada" << endl;
            return 0;
        }
    }

    media = kmt / litrost;
    cout << "a media de km/l do seu carro e de: " << media << endl;

    return 0;
}
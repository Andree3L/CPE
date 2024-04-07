#include <iostream>

using namespace std;

int main() {
        string letra;

        cout << "digite uma letra: " << endl;
        cin >> letra;

        if (letra.length() != 1) {
        cout << "Erro: tem mais de uma letra" << endl;
        return 1;
    }

        for (char& p : letra) {
        p = tolower(p);

        switch (p) {
            case 'a':
                cout << "e vogal" << endl;
                break;
            case 'e':
                cout << "e vogal" << endl;
                break;
            case 'i':
                cout << "e vogal" << endl;
                break;
            case 'o':
                cout << "e vogal" << endl;
                break;
            case 'u':
                cout << "e vogal" << endl;
                break;
            default:
                cout << "e consoante" << endl;
                break;
        }
    }

    return 0;
}
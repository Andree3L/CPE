#include <iostream>

using namespace std;

int main() {
    int senha;

        cout << "Digite a senha" << endl;
        cin >> senha;

        if (senha == 1234) {
            cout << "ACESSO PERMITIDO" << endl;
        } else {
            cout << "ACESSO NEGADO" << endl;
        }
    return 0;
}

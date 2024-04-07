#include <iostream>

using namespace std;

int main() {
    int nB;
    int nD = 0;
    int expoente = 0;

    cout << "Digite um numero binario: ";
    cin >> nB;

    while (nB != 0) {
        int digito = nB % 10;
        nB /= 10;
        nD += digito * (1 << expoente);
        expoente++;
    }

    cout << "O numero decimal correspondente e: " << nD << endl;

    return 0;
}

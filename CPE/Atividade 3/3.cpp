#include <iostream>

using namespace std;

int main() {
    int numero, d1, d2, d4, d5;

    cout << "digite 5 digitos inteiros" << endl;
    cin >> numero;

    d1 = numero / 10000;    
    d2 = (numero % 10000) / 1000;
    // o d3 nao existe porque nao troca de lugar ele permanece no mesmo, mas seria %1000/100
    d4 = (numero % 100) / 10; 
    d5 = numero % 10;

     if (d1 == d5 && d2 == d4) {
        cout << "O numero " << numero << " e um palindromo." << endl;
    } else {
        cout << "O numero " << numero << " nao e um palindromo." << endl;
    }

    return 0;
}

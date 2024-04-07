#include <iostream>

using namespace std;

int main() {
    float gasolina, etanol;

    cout << "Qual o valor do Litro de Gasolina??" << endl;
    cin >> gasolina;

    cout << "Qual o valor do Litro de Etanol??" << endl;
    cin >> etanol;

    if ( gasolina / etanol < 0.7) {
        cout << "e melhor abastecer com etanol" << endl;  
    } else {
        cout << "e melhor abastecer com gasolina" << endl;
    }

    return 0;
}
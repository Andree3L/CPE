#include <iostream>

using namespace std;

int main() {
    int num;
    bool nPrimo = true;

    // Entrada do numero
    cout << "Vamos ver se um numero e primo?? So pode colocar numeros inteiro :D \n";
    cout << "Digite o numero: ";
    cin >> num;

    // Verificar se o número é primo
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            nPrimo = false;
            break;
        }
    }

    // Exibir o resultado
    if (nPrimo == true) {
        cout << num << " e um numero primo " << endl;
    } else {
        cout << num << " nao e um numero primo " << endl;
    }
    
    return 0;
}

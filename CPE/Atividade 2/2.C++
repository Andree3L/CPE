#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    
    // Entrada dos numeros
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    
    // Soma
    cout << "Soma: " << num1 + num2 << endl;

    // Diferenca
    cout << "Diferenca: " << num1 - num2 << endl;

    // Produto
    cout << "Produto: " << num1 * num2 << endl;
     
    // Quociente
    if (num2 != 0) {
        cout << "Quociente: " << num1 / num2 << endl;
    } else {
        cout << "Nao e possível dividir por zero." << endl;
    }
    
    return 0;
}
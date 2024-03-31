#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Entrada dos numeros
    cout << "Vamos ver se um numero e mutiplo de outro?? So pode colocar numeros inteiro :D \n";
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    
    // Soma
    if (num2 != 0 && num1 % num2 == 0) {
    cout << num1 << " e multiplo de " << num2 << endl;
    } else {
    cout << num1 << " nao e multiplo de " << num2 << endl;
    }
    
    return 0;
}
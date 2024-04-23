#include <iostream>

using namespace std;

bool primo(int num){
// Verificar se o número é primo
for (int i = 2; i <= num; i++) {
    if (num % i == 0) 
        return false;
    }
    return true;
}

int main() {
    int num;
    // Entrada do numero
    cout << "Vamos ver se um numero e primo?? So pode colocar numeros inteiro :D \n";
    cout << "Digite o numero: ";
    cin >> num;

    // Exibir o resultado
    if ( primo(num) == true) {
        cout << num << " e um numero primo " << endl;
    } else {
        cout << num << " nao e um numero primo " << endl;
    }
    
    return 0;
}

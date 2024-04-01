#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num1, num2, hipotenusa;
    
    // Entrada dos catetos
    cout << "me diga 2 catetos que irei calcular a hipotenusa \n";
    cout << "Digite o primeiro cateto: ";
    cin >> num1;
    cout << "Digite o segundo cateto: ";
    cin >> num2;
    
    //calculo da hipotenusa
    hipotenusa = sqrt((num1 * num1) + (num2 * num2));

    //Resultado
    cout << "o valor da hipotenusa e: " << hipotenusa;

    return 0;
}
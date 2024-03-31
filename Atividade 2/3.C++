#include <iostream>

using namespace std;

int main() {
    float raio;
    //Entrada do raio
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    //calculo do diametro
    cout << "O diametro do circulo e: "<< 2*raio << endl;

    //calculo da area
    cout << "A area do circulo e: "<< 3.14159*(raio*raio) << endl;

    return 0;
}
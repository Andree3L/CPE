#include <iostream>

using namespace std;

int main() {
    float largura, comprimento, area;
    
    // Entrada dos valores
    cout << "qual a largura em metro? ";
    cin >> largura;
    cout << "qual o comprimento em metros? ";
    cin >> comprimento;

    //calculo da area
    area = largura * comprimento;

    cout << "A area da sala e: " << area << " metros quadrados." << endl;

    return 0;
}
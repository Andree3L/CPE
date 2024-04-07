#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float n1, n2, r;
    char e;

    //n1, n2, e, r = numero 1, numero 2, resultado, equação

    cout << "digite um numero" << endl;
    cin >> n1;
    cout << "digite outro numero" << endl;
    cin >> n2;

    cout << "Escolha uma opreacao" << endl;
    cout << "[+]soma" << endl;
    cout << "[-]subtracao" << endl;
    cout << "[*]multiplicacao" << endl;
    cout << "[/]divisao" << endl;
    cout << "digite o simbulo dentro dos []" << endl;
    cin >> e;

    if (e == '+') {
        r = n1 + n2;
        cout << "A soma dos valores e: " <<endl;
    } else if (e == '-') {
        r =n1 - n2;
        cout << "A subtracao dos valores e: " <<endl;
    } else if (e == '*') { 
        r =n1 * n2;
        cout << "A multiplicacao dos valores e: " <<endl;
    } else if (e == '/') {
        if (n2 == 0){
        cout << "nao existe divisao por 0" << endl;
        } else {
            r= n1 / n2;
            cout << "A divisao dos valores e: " <<endl;
        }
    } else {
        cout << "Erro: resposta inesperada" << endl;
    }

     cout << fixed << setprecision(2) << r << endl;
    return 0;
}

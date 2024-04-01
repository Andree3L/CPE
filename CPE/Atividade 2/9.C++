#include <iostream>

using namespace std;

int main() {
    float Km, valor;
    
    // Entrada dos Km
    cout << "Quantos km voce andou?? \n";
    cin >> Km;

     if (Km < 51) {
        valor = Km * 1.75;
    //87.5

    } else if (Km < 151) {
        valor = 87.5 + ((Km - 50) * 1.65);
    //252.5

    } else {
        valor = 252.5 + ((Km - 150) * 1.50);
  
    }
    cout << "O valor pago sera de: " << valor << "\n";
    
    cout << "O valor medio por km sera de: " << valor/Km << endl;

    return 0;
}

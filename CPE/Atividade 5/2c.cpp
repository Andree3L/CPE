#include <iostream>
#include <cmath>

using namespace std;

bool primos(int num) {
    for (int j = 2; j < num; j++) {
        if (num % j == 0)
            return false;
    }
    return true;
}

bool primo(int num) {
    int raiz = sqrt(num);

    for (int i = 2; i <= raiz; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    cout << "Numeros primos feitos com raiz: " << endl;  
    for (int i = 2; i <= 1000; i++) {
        if (primo(i) == true)
            cout << i << ", ";
    }

    cout << "Numeros primos feito da forma traducional: " << endl; 
    for (int i = 2; i <= 1000; i++) {
    if (primos(i) == true)
        cout << i << ", ";
    }  
    return 0;
}

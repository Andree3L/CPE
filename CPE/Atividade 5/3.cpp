#include <iostream>

using namespace std;

int perfeito(int num) {
    int np = 0;
    for (int j = 1; j < num; j++) {
        if (num % j == 0)
            np += j;
    }
    return np;
}

int main() {

    cout << "Os numeros perfeitos de 1 a 1000 sao : " << endl; 
    for (int i = 1; i <= 1000; i++) {
        if (perfeito(i) == i)
        cout << i << endl;
    }
    return 0;
}
#include <iostream>
 
using namespace std;

int main() {

    int Par[5], Impar[5], num[15];
    int par = 0, impar = 0;

    for (int i = 0; i < 15; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 15; i++) {
        if (num[i] % 2 == 0) {
            Par[par++] = num[i];
            if (par == 5) {
                for ( int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << Par[j] << endl;
                }
                par = 0;
            }
        } else { // Se for ímpar
            Impar[impar++] = num[i];
            if (impar == 5) {
                    for ( int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << Impar[j] << endl;
                }
                impar = 0;
            }
        }
    }

    for (int i = 0; i < impar; i++) {
    cout << "impar[" << i << "] = " << Impar[i] << endl;
    }
    for (int i = 0; i < par; i++) {
        cout << "par[" << i << "] = " << Par[i] << endl;
    }

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    long long X;
    double N[100];

    cin >> X;
    N[0] = X;

    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << "\n";
        if (i < 99) {
            N[i + 1] = N[i] / 2;
        }
    }

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int C;
    char T;
    double soma, numero;

    soma = 0.0;
    cin >> C;
    cin >> T;
    for (int i = 0; i < 12; ++i){
        for (int j = 0; j < 12; ++j){
            cin >> numero;

            if (j == C)
            {
                soma += numero;
            }
        }
    }

    if (T == 'M') {
        cout << fixed << setprecision(1) << soma / 12.0 << endl;
    } else {
        cout << fixed << setprecision(1) << soma << endl;
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    string str, resultado;
    int C;
    cin >> C;
    cin.ignore();

    for (int i = 0; i < C; i++) {

        getline(cin,str,'\n');
        reverse(str.begin(), str.end());

        for (char mudanca : str) {
            if (islower(mudanca)) {
                resultado += mudanca;
            }
        }

        cout << resultado << endl;
        resultado = "";
    
    }

    return 0;
}
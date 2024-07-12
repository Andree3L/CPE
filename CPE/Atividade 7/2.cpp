#include <iostream>
#include <string>

using namespace std;

int main() {
    long long M;
    int A;
    string str, RA, N;

    system("clear||cls");

    cin >> A;
    cin.ignore();
    
    for (int i = 0; i < A; i++) {
    getline(cin, str);

    RA = str.substr(0, 2);
    N = str.substr(2);
    M = stoll(N);

    if (str.length() != 20 || RA != "RA" || M == 0) {
        cout << "INVALID DATA" << endl;
    } else {
        cout << M << endl;
    }
    }

    RA = "";
    N = "";
    M = 0;

    return 0;
}
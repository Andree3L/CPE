#include <iostream>

using namespace std;

int main() {
    int C, N;

    cin >> C;
    cin.ignore();

    for (int i = 0; i < C; i++) {
        cin >> N;
        cin.ignore();

        unsigned long long arroz = 1;

        for (int j = 0; j < N; j++) {
            arroz *= 2;
        }

        unsigned long long gramas = arroz / 12;
        unsigned long long kg = gramas / 1000;

        unsigned long long *ptr = &kg;

        cout << *ptr << "kg" << endl;
    }

    return 0;
}
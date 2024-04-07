#include <iostream>

using namespace std;

int main() {
    float l1, l2, l3;

    cout << "digite o lado 1 do triangulo: " << endl;
    cin >> l1;

    cout << "digite o lado 2 do triangulo: " << endl;
    cin >> l2;

    cout << "digite o lado 3 do triangulo: " << endl;
    cin >> l3;

    if (l1 == l2 && l2 == l3 && l3 == l1) {
        cout << "e um tringulo equilatero" << endl;
    } else if ((l1 != l2 && l2 != l3 && l3 != l1)) {
        cout << "e um tringulo escaleno" << endl;
    } else {
        cout << "e um tringulo isocele" << endl;
    }
    return 0;
}

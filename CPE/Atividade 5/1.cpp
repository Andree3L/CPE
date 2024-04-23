#include <iostream>

using namespace std;

float Celsius, Fahrenheit;

float Convertor () {
    Fahrenheit = (9.0 / 5.0) * Celsius + 32.0;
    return Fahrenheit;
}

int main() {

    cout << "Celsius || Fahrenheit" << endl;
    for (Celsius = 0; Celsius <= 100; Celsius += 1) {
        Fahrenheit = Convertor();
        cout << "   " << Celsius << "    ==   " << Fahrenheit << endl;
    }

    return 0; 
}
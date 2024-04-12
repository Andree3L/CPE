#include<iostream>
using namespace std;

int fatorial (int n){
    return (n == 1 || n == 0) ? 1 : n * fatorial(n-1);
}

int main (){
    int num;

    cout << "por favor digite um numero: " << endl;
    cin >> num;

    // checando se o numero é negativo
    if(num < 0){
        cout << "seu numero e negativo" << endl;
        return main();
    }

    cout << "o fatorial do seu numero e: " << fatorial(num);
    return 0;
}
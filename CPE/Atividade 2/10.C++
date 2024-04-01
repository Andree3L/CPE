#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra;
    string Criptografado;
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

    cout << "Digite 5 caracteres: \n";
    cin >> palavra;

    //verificacao de 5 caracteres
    if (palavra.length() != 5) {
        cout << "Erro: A palavra deve ter exatamente 5 caracteres." << endl;
        return 1;
    }

    //contagem das vogais e a criptografia
    for (char& p : palavra) {
        p = tolower(p);

        switch (p) {
            case 'a':
                a++; //Toda vez que aparecer o a soma um na variavel a
                Criptografado += 'i'; //Aqui vai trocar o a por i e salvar na variavel criptografado
                break;
            case 'e':
                e++;
                Criptografado += 'o';
                break;
            case 'i':
                i++;
                Criptografado += 'u';
                break;
            case 'o':
                o++;
                Criptografado += 'o';
                break;
            case 'u':
                u++;
                Criptografado += 'u';
                break;
            default:
                Criptografado += p;
                break;
        }
    }

    //onde armazena a quantidade de vogais
    cout << "Quantidade de vogais:" << endl;
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;

    cout << "Os caracteres Criptografadotografados sao: \n";
    cout << Criptografado; // Resultado da criptografia

    return 0;
}
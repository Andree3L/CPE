#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo = "mochileiro.txt";
    ifstream infile(nomeArquivo);

    if (!infile.is_open()) {
        cerr << "Erro ao abrir o arquivo " << nomeArquivo << endl;
        return 1;
    }

    char caractere;
    cout << "Informe o caractere a ser contado: ";
    cin >> caractere;

    string line;
    int linhaNumero = 1;

    while (getline(infile, line)) {
        int contador = 0;
        for (char c : line) {
            if (c == caractere) {
                contador++;
            }
        }
        cout << "Linha " << linhaNumero << ": " << contador << " ocorrencias do caractere '" << caractere << "'" << endl;
        linhaNumero++;
    }

    infile.close();
    return 0;
}

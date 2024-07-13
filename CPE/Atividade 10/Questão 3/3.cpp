#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

void lerArquivo(const string& nomeArquivo, map<string, double>& dados) {
    ifstream infile(nomeArquivo);
    if (!infile.is_open()) {
        cerr << "Erro ao abrir o arquivo " << nomeArquivo << endl;
        exit(1);
    }

    string codigo;
    double medida;

    while (infile >> codigo >> medida) {
        dados[codigo] = medida;
    }

    infile.close();
}

string encontrarMaior(const map<string, double>& dados) {
    string codigoMaior;
    double maiorValor = -1.0;

    for (const auto& par : dados) {
        if (par.second > maiorValor) {
            maiorValor = par.second;
            codigoMaior = par.first;
        }
    }

    return codigoMaior;
}

int main() {
    map<string, double> alturas;
    map<string, double> pesos;

    lerArquivo("altura.txt", alturas);
    lerArquivo("peso.txt", pesos);

    string codigoMaiorAltura = encontrarMaior(alturas);
    string codigoMaiorPeso = encontrarMaior(pesos);

    cout << "Pessoa com maior altura: " << codigoMaiorAltura << " com " << alturas[codigoMaiorAltura] << " metros" << endl;
    cout << "Pessoa com maior peso: " << codigoMaiorPeso << " com " << pesos[codigoMaiorPeso] << " quilogramas" << endl;

    return 0;
}

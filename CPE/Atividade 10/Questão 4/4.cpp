#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void cadastrarAluno() {
    string nome, matricula;
    cout << "Informe o nome do aluno: ";
    cin >> nome;
    cout << "Informe a matricula do aluno: ";
    cin >> matricula;

    ofstream arquivo(nome + ".txt");
    if (!arquivo.is_open()) {
        cerr << "Erro ao criar o arquivo para o aluno " << nome << endl;
        return;
    }
    arquivo << matricula << endl;
    arquivo.close();
    cout << "Aluno " << nome << " cadastrado com sucesso!" << endl;
}

void adicionarNota() {
    string nome;
    double nota;
    cout << "Informe o nome do aluno: ";
    cin >> nome;
    cout << "Informe a nota do aluno: ";
    cin >> nota;

    ofstream arquivo(nome + ".txt", ios::app);
    if (!arquivo.is_open()) {
        cerr << "Aluno " << nome << " nao cadastrado." << endl;
        return;
    }
    arquivo << nota << endl;
    arquivo.close();
    cout << "Nota adicionada com sucesso para o aluno " << nome << "!" << endl;
}

void calcularMedia() {
    string nome;
    cout << "Informe o nome do aluno: ";
    cin >> nome;

    ifstream arquivo(nome + ".txt");
    if (!arquivo.is_open()) {
        cerr << "Aluno " << nome << " nao cadastrado." << endl;
        return;
    }

    string linha;
    getline(arquivo, linha); // Ignorar a primeira linha que contem a matricula

    vector<double> notas;
    double nota;
    while (getline(arquivo, linha)) {
        nota = stod(linha);
        notas.push_back(nota);
    }
    arquivo.close();

    if (notas.empty()) {
        cout << "Nenhuma nota encontrada para o aluno " << nome << endl;
        return;
    }

    double soma = 0.0;
    for (double n : notas) {
        soma += n;
    }
    double media = soma / notas.size();
    cout << "Media do aluno " << nome << " e " << media << endl;
}

int main() {
    int opcao;

    do {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar aluno" << endl;
        cout << "2. Adicionar nota de um aluno" << endl;
        cout << "3. Calcular media de um aluno" << endl;
        cout << "4. Fechar o programa" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << "Programa encerrado." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}


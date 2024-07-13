#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("vetores.txt");
    ofstream outfile("soma.txt");
    vector<vector<int>> vetores;
    string line;

    while (getline(infile, line)) {
        istringstream iss(line);
        int num;
        vector<int> vetor;
        while (iss >> num) {
            vetor.push_back(num);
        }
        vetores.push_back(vetor);
    }

    if (vetores.empty()) {
        return 1;
    }

    size_t max_size = 0;
    for (const auto& vetor : vetores) {
        if (vetor.size() > max_size) {
            max_size = vetor.size();
        }
    }

    vector<int> soma(max_size, 0);
    for (const auto& vetor : vetores) {
        for (size_t i = 0; i < vetor.size(); ++i) {
            soma[i] += vetor[i];
        }
    }

    for (const auto& val : soma) {
        outfile << val << " ";
    }

    return 0;
}

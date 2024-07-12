#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<string> v1(M), v2(M);
    for (int i = 0; i < M; ++i) {
        cin >> v1[i] >> v2[i];
    }
    
    string bacteria = "A";

    for (int segundos = 0; segundos < N; ++segundos) {
        string novaBacteria = "";
        int i = 0;
        
        while (i < bacteria.size()) {
            int j = i;
            while (j < bacteria.size() && bacteria[j] == bacteria[i]) {
                ++i;
            }
            
            string segmento = bacteria.substr(i, j - i);
            
            bool substituido = false;
            for (int k = 0; k < M; ++k) {
                if (v1[k] == segmento) {
                    novaBacteria += v2[k];
                    substituido = true;
                    break;
                }
            }

            if (!substituido) {
                novaBacteria += segmento;
            }

            i = j;
        }

        bacteria = novaBacteria;
    }

    int countA = count(bacteria.begin(), bacteria.end(), 'A');
    int countB = count(bacteria.begin(), bacteria.end(), 'B');

    cout << countA << " " << countB << endl;
    
    return 0;
}

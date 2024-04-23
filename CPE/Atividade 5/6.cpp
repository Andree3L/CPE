#include <iostream>

void torres_hanoi(int n, int origem, int destino, int temp) {
    if (n == 1) {
        std::cout << origem << " → " << destino << std::endl;
    } else {
        torres_hanoi(n-1, origem, temp, destino);
        std::cout << origem << " → " << destino << std::endl;
        torres_hanoi(n-1, temp, destino, origem);
    }
}

int main() {
    int num_discos = 3;
    int estaca_origem = 1;
    int estaca_destino = 3;
    int estaca_temp = 2;

    torres_hanoi(num_discos, estaca_origem, estaca_destino, estaca_temp);

    return 0;
}

#include <iostream>

using namespace std;

bool primo(int num) {
    for (int j = 2; j < num; j++) {
        if (num % j == 0)
            return false;
    }
    return true;
}

int main() {   
    for (int i = 2; i <= 1000; i++) {
        if (primo(i) == true)
            cout << i << ", ";
    }  
    return 0;
}

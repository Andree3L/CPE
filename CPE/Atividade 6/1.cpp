#include <iostream>

using namespace std;
 
int main() {
 
    int Vetor[10];

    for (int i = 0; i < 10; i++){
    cin >> Vetor[i];
    }

    for (int i = 0; i < 10; i++){
       if (Vetor[i] < 1){
          Vetor[i] = 1;
       }
    }


    
    for (int i = 0; i < 10; i++){
      cout << "X[" << i << "] = " << Vetor[i] << endl;
    }

    return 0;
}
 

#include<iostream> 

using namespace std; 

 

int main (){     

    int mnN = 1, miN = 100, chute; 

    char resposta; 

    cout << "pense em um numero entre 1 e 100 que eu irei adivinha-lo. \nreponda com '>' se o numero for maior, respostaonda com '<' se for menor e com '=' se for o seu numero" << endl; 

     

    while (true){ 

        chute = mnN + (miN - mnN) / 2; 

        cout << "o seu numero e: " << chute << "?\n"; 

        cin >> resposta; 

 

        if (resposta == '='){ 

            cout << "acertei! Eu sou bom demais" << endl; 

            }else if (resposta == '<'){ 

                miN = chute - 1; 

            } else if (resposta == '>'){ 

                mnN = chute + 1; 

            } 

        if (mnN > miN){ 

            cout << "seu numero nao esta no intervalo"; 

        } 

    } 

 

    return 0; 

} 
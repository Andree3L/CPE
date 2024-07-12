#include <iostream>
#include <cstring>
#include <unistd.h>
#include <ctype.h>

using namespace std;

const int TAM = 3;
int qtdRegistros = 0;

struct Categoria {
    int codigo;
    string nome;
};

struct Setor {
    string nome;
};

struct Localizacao {
    int codigo;
    string nome;
};

struct Ramal {
   int numero;
   Categoria categoria;
   Setor setor;
   Localizacao localizacao;
   string sala;
   string responsavel;
   string responsavelAteste;
};
    
void cadastrarRamal(Ramal *ramal, Ramal *vetor); 
bool verificarRamal(Ramal *vetor, int &numero);
void imprimirRamais(Ramal *vetor);

int main() {
    Ramal ramalTemp;
    Ramal vetorRamais[5];
    Ramal *ponteiroRamal = &ramalTemp;

    if (qtdRegistros == TAM) {
        cout << "\n=======================================================\n";
        cout << "\n     NAO HA ESPACO LIVRE PARA NOVOS CADASTROS!\n";
        cout << "\n=======================================================\n";
        sleep(4);
        return 0;
    }

    for (int i = 0; i < TAM; i++) {
        cadastrarRamal(ponteiroRamal, &vetorRamais[i]);
        vetorRamais[i] = ramalTemp;
        qtdRegistros++;
    }

    for (int i = 0; i < TAM; i++) {
        system("cls");
        cout << "\n===============================\n";
        cout << "\nIMPRESSAO DO CADASTRO DE RAMAIS\n";
        cout << "\n===============================\n";
        imprimirRamais(&vetorRamais[i]);
    }
    
    return 0;
}

void cadastrarRamal(Ramal *ramal, Ramal *vetor) {
    system("cls");
    
    cout << "\n==================\n";
    cout << "\nCADASTRO DE RAMAIS\n";
    cout << "\n==================\n";

    int aux = 0;

    do {
        cout << "\nInforme o numero do ramal entre 1000 e 3000: ";
        cin >> aux;
        
        if (aux < 1000 || aux > 2999) {
           cout << "\nNumero do ramal fora do intervalo 1000 ate 2999\n";
           sleep(2);
        }

        vetor = ramal;

        if (!verificarRamal(vetor, aux)) {
           cout << "\nNumero do ramal ja esta cadastrado\n";
           sleep(1);
           aux = -1;
        }

        if (aux != -1) {
           ramal->numero = aux;
        }
        
    } while (aux < 1000 || aux > 2999);

    do {
        cout << "\nInforme o codigo da categoria entre 0 e 6: ";
        cin >> ramal->categoria.codigo;
        cin.ignore();
        if (ramal->categoria.codigo < 0 || ramal->categoria.codigo > 6) {
           cout << "\nCodigo da categoria fora do intervalo 0 ate 6\n";
           sleep(2);
        }
        
    } while (ramal->categoria.codigo < 0 || ramal->categoria.codigo > 6);
    
    cout << "\nInforme a descricao da categoria: ";
    getline(cin, ramal->categoria.nome);
    for (auto &letra: ramal->categoria.nome){
        letra = toupper(letra); 
    }
 
    do {
        cout << "\nInforme a descricao do setor: ";
        getline(cin, ramal->setor.nome);
        if (ramal->setor.nome == " ") {
           cout << "\nDescricao do setor deve ser preenchida\n";
           sleep(2);
        }
        
    } while (ramal->setor.nome == " ");
    
    for (auto &letra: ramal->setor.nome) {
        letra = toupper(letra); 
    }

    do {
        cout << "\nInforme o codigo da localizacao 500 ou 505: ";
        cin >> ramal->localizacao.codigo;
        cin.ignore();
        if (ramal->localizacao.codigo != 500 && ramal->localizacao.codigo != 505) {
           cout << "\nCodigo da localizacao diferente de 500 ou 505\n";
           sleep(2);
        }
        
    } while (ramal->localizacao.codigo != 500 && ramal->localizacao.codigo != 505);
    
    cout << "\nInforme a descricao da localizacao: ";
    getline(cin, ramal->localizacao.nome);
    for (auto &letra: ramal->localizacao.nome) {
        letra = toupper(letra); 
    }

    do {
        cout << "\nInforme o numero do andar + o numero da sala: ";
        getline(cin, ramal->sala);
        if (ramal->sala == " "){
           cout << "\nNumero do andar + o numero da sala deve ser preenchido\n";
           sleep(2);
        }
        
    } while (ramal->sala == " ");

    do {
        cout << "\nInforme o nome do responsavel pelo ramal: ";
        getline(cin, ramal->responsavel);
        if (ramal->responsavel == " ") {
           cout << "\nO nome do responsavel pelo ramal deve ser preenchido\n";
           sleep(2);
        }
        
    } while (ramal->responsavel == " ");
    
    for (auto &letra: ramal->responsavel) {
        letra = toupper(letra); 
    }

    do {
        cout << "\nInforme o nome do responsavel pelo ateste: ";
        getline(cin, ramal->responsavelAteste);
        if (ramal->responsavelAteste == " ") {
           cout << "\nO nome do responsavel pelo ateste deve ser preenchido\n";
           sleep(2);
        }
        
    } while (ramal->responsavelAteste == " ");
    
    for (auto &letra: ramal->responsavelAteste) {
        letra = toupper(letra); 
    }

    return;
}

bool verificarRamal(Ramal *vetor, int &numero) {
    for (int i = 0; i < TAM; i++) {  
        if (vetor[i].numero == numero) {
           return false;
        }
    }
    return true;    
}

void imprimirRamais(Ramal *vetor) {
    cout << "\nRamal                  : " << vetor->numero;
    cout << "\nCategoria              : " << vetor->categoria.codigo << " - ";
    cout << vetor->categoria.nome;
    cout << "\nSetor                  : " << vetor->setor.nome;
    cout << "\nEdificio               : " << vetor->localizacao.codigo << " - ";
    cout << vetor->localizacao.nome;
    cout << "\nSala                   : " << vetor->sala;
    cout << "\nResponsavel pelo Ramal : " << vetor->responsavel;
    cout << "\nResponsavel pelo Ateste: " << vetor->responsavelAteste;
    cout << "\n==============================================================\n";
    sleep(2);
    return;
}

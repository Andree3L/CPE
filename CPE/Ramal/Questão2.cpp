#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_RAMALS = 10;

// Definicao das estruturas
struct Categoria {
    int iCodCategoria;
    string sNomeCategoria;
};

struct Setor {
    string sSetor;
};

struct Edificio {
    int iCodEdificio;
    string sNomeEdificio;
};

struct CadRamal {
    int iNumRamal;
    Categoria VarCategoria;
    Setor VarSetor;
    Edificio VarEdificio;
    string sSalaRamal;
    string sRespRamal;
    string sRespAteste;
};

// Prototipos de funcao
void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor);
void ListarCadastroParaPesquisa(CadRamal *pVetor, int pOpc);
bool VerificarExistenciaDoRegistro(CadRamal *pVetor, string pAuxiliar, int &pRamal, int pOpc);
void ImprimirCadastroDeRamais(CadRamal *pRamal);

int main() {
    CadRamal vVetor[MAX_RAMALS];
    int iQtdRegistros = 0;
    int iOpc, iRamal;
    string sAuxiliar;

    do {
        system("cls");

        cout << "\n\t=======================================";
        cout << "\n\tMENU PARA CADASTRO E PESQUISA DE RAMAIS ";
        cout << "\n\t=======================================\n";
        cout << "\n\t   1 - Pesquisar por Numero de Ramal";
        cout << "\n\t   2 - Pesquisar por Setor";
        cout << "\n\t   3 - Pesquisar por Edificio";
        cout << "\n\t   4 - Pesquisar por Responsavel pelo Ramal";
        cout << "\n\t   5 - Pesquisar por Responsavel pelo Atesto";
        cout << "\n\t   6 - Cadastro de Ramais";
        cout << "\n\t   7 - Imprimir o Cadastro";
        cout << "\n\t   8 - Finalizar o Programa";
        cout << "\n\n\t   Informe a Opcao desejada: ";
        cin >> iOpc;

        switch (iOpc) {
            case 1:
                system("cls");
                cout << "\n===============";
                cout << "\nLISTA DE RAMAIS";
                cout << "\n===============";
                cout << "\n\nDigite o numero do ramal que deseja pesquisar: ";
                cin >> iRamal;

                if (VerificarExistenciaDoRegistro(vVetor, "", iRamal, iOpc)) {
                    cout << "\nNumero do ramal informado nao cadastrado!\n";
                    system("pause");
                } else {
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    system("pause");
                }
                break;

            case 2:
                system("cls");
                cout << "\n================";
                cout << "\nLISTA DE SETORES";
                cout << "\n================";
                cout << "\n\nDigite o nome do Setor que deseja pesquisar: ";
                cin >> sAuxiliar;

                if (VerificarExistenciaDoRegistro(vVetor, sAuxiliar, iRamal, iOpc)) {
                    cout << "\nNome do setor informado nao cadastrado!\n";
                    system("pause");
                } else {
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    system("pause");
                }
                break;

            case 3:
                system("cls");
                cout << "\n==================";
                cout << "\nLISTA DE EDIFICIOS";
                cout << "\n==================";
                cout << "\n\nDigite o numero do Edificio que deseja pesquisar: ";
                cin >> iRamal;

                if (VerificarExistenciaDoRegistro(vVetor, "", iRamal, iOpc)) {
                    cout << "\nEdificio informado nao cadastrado!\n";
                    system("pause");
                } else {
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    system("pause");
                }
                break;

            case 4:
                system("cls");
                cout << "\n=================================";
                cout << "\nLISTA DOS RESPONSIVEIS PELO RAMAL";
                cout << "\n=================================";
                cout << "\n\nDigite o nome do Responsavel que deseja pesquisar: ";
                cin >> sAuxiliar;

                if (VerificarExistenciaDoRegistro(vVetor, sAuxiliar, iRamal, iOpc)) {
                    cout << "\nNome do Responsavel informado nao cadastrado!\n";
                    system("pause");
                } else {
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    system("pause");
                }
                break;

            case 5:
                system("cls");
                cout << "\n==================================";
                cout << "\nLISTA DOS RESPONSIVEIS PELO ATESTO";
                cout << "\n==================================";
                cout << "\n\nDigite o nome do Responsavel que deseja pesquisar: ";
                cin >> sAuxiliar;

                if (VerificarExistenciaDoRegistro(vVetor, sAuxiliar, iRamal, iOpc)) {
                    cout << "\nNome do Responsavel informado nao cadastrado!\n";
                    system("pause");
                } else {
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    system("pause");
                }
                break;

            case 6:
                if (iQtdRegistros == MAX_RAMALS) {
                    cout << "\n=======================================================";
                    cout << "\n      NAO HA ESPACO LIVRE PARA NOVOS CADASTROS";
                    cout << "\n=======================================================\n";
                    system("pause");
                    break;
                }

                CadastroDeRamais(&vVetor[iQtdRegistros], &vVetor[iQtdRegistros]);
                iQtdRegistros++;
                break;

            case 7:
                system("cls");
                cout << "\n==============================";
                cout << "\nLISTAGEM DO CADASTRO DE RAMAIS";
                cout << "\n==============================\n";

                if (iQtdRegistros == 0) {
                    cout << "\n=======================================================";
                    cout << "\n       NAO HA REGISTROS CADASTRADOS NO MOMENTO";
                    cout << "\n=======================================================\n";
                    system("pause");
                    break;
                }

                for (int i = 0; i < iQtdRegistros; i++) {
                    ImprimirCadastroDeRamais(&vVetor[i]);
                }

                system("pause");
                break;

            case 8:
                return 0;

            default:
                cout << "\n\tOpcao informada invalida!\n";
                system("pause");
        }

    } while (true);

    return 0;
}

void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor) {
    system("cls");

    cout << "\n==================";
    cout << "\n CADASTRO DE RAMAL";
    cout << "\n==================";

    cout << "\n\nDigite o numero do Ramal: ";
    cin >> pRamal->iNumRamal;
    cin.ignore();

    cout << "\nDigite o codigo da Categoria: ";
    cin >> pRamal->VarCategoria.iCodCategoria;
    cin.ignore();

    cout << "\nDigite o nome da Categoria: ";
    getline(cin, pRamal->VarCategoria.sNomeCategoria);

    cout << "\nDigite o nome do Setor: ";
    getline(cin, pRamal->VarSetor.sSetor);

    cout << "\nDigite o codigo do Edificio: ";
    cin >> pRamal->VarEdificio.iCodEdificio;
    cin.ignore();

    cout << "\nDigite o nome do Edificio: ";
    getline(cin, pRamal->VarEdificio.sNomeEdificio);

    cout << "\nDigite a sala do Ramal: ";
    getline(cin, pRamal->sSalaRamal);

    cout << "\nDigite o nome do responsavel pelo Ramal: ";
    getline(cin, pRamal->sRespRamal);

    cout << "\nDigite o nome do responsavel pelo Atesto: ";
    getline(cin, pRamal->sRespAteste);

    *pVetor = *pRamal;
}

void ListarCadastroParaPesquisa(CadRamal *pVetor, int pOpc) {
    if (pVetor->iNumRamal == 0) { 
        return; 
    }

    switch (pOpc) {
        case 0:
            cout << pVetor->iNumRamal << "\n";
            break;

        case 1:
            cout << pVetor->VarSetor.sSetor << "\n";
            break;

        case 2:
            cout << pVetor->VarEdificio.sNomeEdificio << "\n";
            break;

        case 3:
            cout << pVetor->sRespRamal << "\n";
            break;

        case 4:
            cout << pVetor->sRespAteste << "\n";
            break;
    }
}

bool VerificarExistenciaDoRegistro(CadRamal *pVetor, string pAuxiliar, int &pRamal, int pOpc) {
    bool bEncontrado = false;

    switch (pOpc) {
        case 1:
            for (int i = 0; i < MAX_RAMALS; i++) {
                if (pVetor[i].iNumRamal == pRamal) {
                    pRamal = i;
                    bEncontrado = true;
                    break;
                }
            }
            break;

        case 2:
            for (int i = 0; i < MAX_RAMALS; i++) {
                if (pVetor[i].VarSetor.sSetor == pAuxiliar) {
                    pRamal = i;
                    bEncontrado = true;
                    break;
                }
            }
            break;

        case 3:
            for (int i = 0; i < MAX_RAMALS; i++) {
                if (pVetor[i].VarEdificio.sNomeEdificio == pAuxiliar) {
                    pRamal = i;
                    bEncontrado = true;
                    break;
                }
            }
            break;

        case 4:
            for (int i = 0; i < MAX_RAMALS; i++) {
                if (pVetor[i].sRespRamal == pAuxiliar) {
                    pRamal = i;
                    bEncontrado = true;
                    break;
                }
            }
            break;

        case 5:
            for (int i = 0; i < MAX_RAMALS; i++) {
                if (pVetor[i].sRespAteste == pAuxiliar) {
                    pRamal = i;
                    bEncontrado = true;
                    break;
                }
            }
            break;
    }

    return !bEncontrado;
}

void ImprimirCadastroDeRamais(CadRamal *pRamal) {
    cout << "\n===================================";
    cout << "\nNumero do Ramal: " << pRamal->iNumRamal;
    cout << "\nCategoria: " << pRamal->VarCategoria.sNomeCategoria;
    cout << "\nSetor: " << pRamal->VarSetor.sSetor;
    cout << "\nEdificio: " << pRamal->VarEdificio.sNomeEdificio;
    cout << "\nSala do Ramal: " << pRamal->sSalaRamal;
    cout << "\nResponsavel pelo Ramal: " << pRamal->sRespRamal;
    cout << "\nResponsavel pelo Atesto: " << pRamal->sRespAteste;
    cout << "\n===================================\n";
}

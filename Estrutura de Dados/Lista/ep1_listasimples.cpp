/* 
 * Classe lista, uma lista dinamicamente encadeada
 * 
 * by Joukim, 2017-2019, Estruturas de Dados
 * alterado em 2023 by Renato
 */

#include <iostream>
#include <stdexcept>
using namespace std;

struct equipe {
    string nomeEquipe;
    string lider;
    string linguagem;
    int qtdMembros;
};

class noh {
    friend class lista;
private:
    equipe elenco;
    noh* proximo;
public:
    noh(equipe d);
};

noh::noh(equipe d) {
    elenco = d;
    proximo = nullptr;
}

class lista {
private:
    noh* primeiro;
    noh* ultimo;
public:
    int tamanho;
public:
    lista();
    ~lista();
    void insereNoInicio(equipe elenco);
    void insereNoFim(equipe elenco);
    void insereNaPosicao(int posicao, equipe elenco);
    void removeNaPosicao(int posicao);
    int procura(string valor);
    void imprime();
    bool vazia();
};

lista::lista() {
    primeiro = nullptr;
    ultimo = nullptr;
    tamanho = 0;
}

lista::~lista() {
    while (!vazia()) {
        removeNaPosicao(0);
    }
}

void lista::insereNoInicio(equipe elenco) {
    noh* novo = new noh(elenco);
    if (vazia()) {
        primeiro = novo;
        ultimo = novo;
    } else {
        novo->proximo = primeiro;
        primeiro = novo;
    }
    tamanho++;
}

void lista::insereNoFim(equipe elenco) {
    noh* novo = new noh(elenco);
    if (vazia()) {
        primeiro = novo;
        ultimo = novo;
    } else {
        ultimo->proximo = novo;
        ultimo = novo;
    }
    tamanho++;
}

void lista::insereNaPosicao(int posicao, equipe elenco) {
    if (posicao < 0 || posicao > tamanho)
        throw out_of_range("Posicao invalida!");

    if (posicao == 0)
        insereNoInicio(elenco);
    else if (posicao == tamanho)
        insereNoFim(elenco);
    else {
        noh* novo = new noh(elenco);
        noh* anterior = primeiro;
        for (int i = 0; i < posicao - 1; i++)
            anterior = anterior->proximo;
        novo->proximo = anterior->proximo;
        anterior->proximo = novo;
        tamanho++;
    }
}

void lista::removeNaPosicao(int posicao) {
    if (posicao < 0 || posicao >= tamanho)
        throw out_of_range("Posicao invalida!");

    if (vazia())
        throw underflow_error("Remoção em lista vazia!");

    noh* removido;
    if (posicao == 0) {
        removido = primeiro;
        primeiro = primeiro->proximo;
        if (primeiro == nullptr)
            ultimo = nullptr;
    } else {
        noh* anterior = primeiro;
        for (int i = 0; i < posicao - 1; i++)
            anterior = anterior->proximo;
        removido = anterior->proximo;
        anterior->proximo = removido->proximo;
        if (removido == ultimo)
            ultimo = anterior;
    }
    delete removido;
    tamanho--;
}

int lista::procura(string valor) {
    noh* aux = primeiro;
    int posicao = 0;
    while (aux != nullptr) {
        if (aux->elenco.nomeEquipe == valor)
            return posicao;
        aux = aux->proximo;
        posicao++;
    }
    return -1;
}

void lista::imprime() {
    noh* aux = primeiro;
    while (aux != nullptr) {
        cout << "(" << aux->elenco.nomeEquipe << ", " << aux->elenco.lider << ", " << aux->elenco.linguagem << ", " << aux->elenco.qtdMembros << ")" << endl;
        aux = aux->proximo;
    }
}

bool lista::vazia() {
    return (primeiro == nullptr);
}

int main() {
    lista minhaLista;

    char opcao;
    string nomeEquipe, lider, linguagem;
    int qtdMembros, posicao;

    while (cin >> opcao) {
        switch (opcao) {
            case 'r': {
                if (minhaLista.vazia())
                    cout << "Remoção em lista vazia!" << endl;
                else
                    minhaLista.removeNaPosicao(0);
                break;
            }
            case 'a': {
                if (minhaLista.vazia())
                    cout << "Remoção em lista vazia!" << endl;
                else
                    minhaLista.removeNaPosicao(minhaLista.tamanho - 1);
                break;
            }
            case 'p': {
                if (minhaLista.vazia())
                    cout << "Lista vazia!" << endl;
                else
                    minhaLista.imprime();
                break;
            }
            case 's': {
                cin >> nomeEquipe;
                if (minhaLista.vazia())
                    cout << "Lista vazia!" << endl;
                else {
                    posicao = minhaLista.procura(nomeEquipe);
                    if (posicao == -1)
                        cout << "Nao encontrado" << endl;
                    else
                        cout << posicao << endl;
                }
                break;
            }
            case 'i': {
                cin >> nomeEquipe >> lider >> linguagem >> qtdMembros;
                minhaLista.insereNoInicio({nomeEquipe, lider, linguagem, qtdMembros});
                break;
            }
            case 'h': {
                cin >> nomeEquipe >> lider >> linguagem >> qtdMembros;
                minhaLista.insereNoFim({nomeEquipe, lider, linguagem, qtdMembros});
                break;
            }
            case 'm': {
                cin >> posicao >> nomeEquipe >> lider >> linguagem >> qtdMembros;
                minhaLista.insereNaPosicao(posicao, {nomeEquipe, lider, linguagem, qtdMembros});
                break;
            }
            case 'f': {
                return 0;
            }
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }
    }

    return 0;
}































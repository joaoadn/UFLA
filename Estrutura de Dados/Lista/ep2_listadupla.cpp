
/* 
 * Classe listadup, uma lista dinamicamente duplamente encadeada
 * 
 * by Joukim, 2017-2019, Estruturas de Dados
 * alterado em 2023 by Renato
 */

#include <iostream>
#include <stdexcept>

using namespace std;

struct AcaoPrograma {
    int identificador;
    string nomeAcao;
    int tempoExecucao;
    int tempoConsumido;
};

struct Noh {
    AcaoPrograma acao;
    Noh* proximo;
    Noh* anterior;
};

class ListaDuplamenteEncadeada {
private:
    Noh* primeiro;
    Noh* ultimo;

public:
    ListaDuplamenteEncadeada() : primeiro(nullptr), ultimo(nullptr) {}

    ~ListaDuplamenteEncadeada() {
        while (primeiro != nullptr) {
            Noh* aux = primeiro;
            primeiro = primeiro->proximo;
            delete aux;
        }
    }

    void insereNoInicio(AcaoPrograma acao) {
        Noh* novo = new Noh;
        novo->acao = acao;
        novo->proximo = primeiro;
        novo->anterior = nullptr;

        if (primeiro != nullptr) {
            primeiro->anterior = novo;
        } else {
            ultimo = novo;
        }

        primeiro = novo;
    }

    void insereNoFim(AcaoPrograma acao) {
        Noh* novo = new Noh;
        novo->acao = acao;
        novo->proximo = nullptr;
        novo->anterior = ultimo;

        if (ultimo != nullptr) {
            ultimo->proximo = novo;
        } else {
            primeiro = novo;
        }

        ultimo = novo;
    }

    void insereNaPosicao(int posicao, AcaoPrograma acao) {
        if (posicao < 0) {
            throw runtime_error("Posição inválida!");
        }

        if (posicao == 0) {
            insereNoInicio(acao);
            return;
        }

        Noh* aux = primeiro;
        int cont = 0;

        while (aux != nullptr && cont < posicao - 1) {
            aux = aux->proximo;
            cont++;
        }

        if (aux == nullptr) {
            throw runtime_error("Posição inexistente!");
        }

        Noh* novo = new Noh;
        novo->acao = acao;
        novo->proximo = aux->proximo;
        novo->anterior = aux;

        if (aux->proximo != nullptr) {
            aux->proximo->anterior = novo;
        } else {
            ultimo = novo;
        }

        aux->proximo = novo;
    }

    bool vazia() {
        return primeiro == nullptr;
    }

    int procura(string valor) {
        Noh* aux = primeiro;
        int posicao = 0;

        while (aux != nullptr) {
            if (aux->acao.nomeAcao == valor) {
                return posicao;
            }

            aux = aux->proximo;
            posicao++;
        }

        return -1;
    }

    void removeNoInicio() {
        if (primeiro == nullptr) {
            throw runtime_error("Remoção em lista vazia!");
        }

        Noh* aux = primeiro;

        if (primeiro == ultimo) {
            primeiro = nullptr;
            ultimo = nullptr;
        } else {
            primeiro = primeiro->proximo;
            primeiro->anterior = nullptr;
        }

        delete aux;
    }

    void removeNoFim() {
        if (ultimo == nullptr) {
            throw runtime_error("Remoção em lista vazia!");
        }

        Noh* aux = ultimo;

        if (primeiro == ultimo) {
            primeiro = nullptr;
            ultimo = nullptr;
        } else {
            ultimo = ultimo->anterior;
            ultimo->proximo = nullptr;
        }

        delete aux;
    }

    void imprime() {
        if (primeiro == nullptr) {
            cout << "Lista vazia!" << endl;
            return;
        }

        Noh* aux = primeiro;

        while (aux != nullptr) {
            cout << "(" << aux->acao.identificador << ", " << aux->acao.nomeAcao << ", "
                    << aux->acao.tempoExecucao << ", " << aux->acao.tempoConsumido << ")" << endl;
            aux = aux->proximo;
        }

        cout << " IMPRIMINDO REVERSO " << endl;

        aux = ultimo;

        while (aux != nullptr) {
            cout << "(" << aux->acao.identificador << ", " << aux->acao.nomeAcao << ", "
                    << aux->acao.tempoExecucao << ", " << aux->acao.tempoConsumido << ")" << endl;
            aux = aux->anterior;
        }
    }
};

int main() {
    ListaDuplamenteEncadeada minhaLista;
    char comando;

    do {
        try {
            cin >> comando;
            switch (comando) {
                case 'i': {
                    AcaoPrograma acao;
                    cin >> acao.identificador >> acao.nomeAcao >> acao.tempoExecucao >> acao.tempoConsumido;
                    minhaLista.insereNoInicio(acao);
                    break;
                }
                case 'h': {
                    AcaoPrograma acao;
                    cin >> acao.identificador >> acao.nomeAcao >> acao.tempoExecucao >> acao.tempoConsumido;
                    minhaLista.insereNoFim(acao);
                    break;
                }
                case 'm': {
                    int posicao;
                    cin >> posicao;
                    AcaoPrograma acao;
                    cin >> acao.identificador >> acao.nomeAcao >> acao.tempoExecucao >> acao.tempoConsumido;
                    minhaLista.insereNaPosicao(posicao, acao);
                    break;
                }
                case 's': {
                    string nomeEquipe;
                    cin >> nomeEquipe;
                    if (minhaLista.vazia()) {
                        cout << "Lista vazia!" << endl;
                    } else {
                        int posicao = minhaLista.procura(nomeEquipe);
                        if (posicao == -1) {
                            cout << "Nao encontrado" << endl;
                        } else {
                            cout << posicao << endl;
                        }
                    }
                    break;
                }
                case 'r':
                    try {
                        minhaLista.removeNoInicio();
                    } catch (runtime_error& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 'a':
                    try {
                        minhaLista.removeNoFim();
                    } catch (runtime_error& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 'p':
                    minhaLista.imprime();
                    break;
                case 'f':
                    break;
                default:
                    cout << "Comando inválido!" << endl;
            }
        } catch (runtime_error& e) {
            cout << e.what() << endl;
        }

    } while (comando != 'f');

    return 0;
}









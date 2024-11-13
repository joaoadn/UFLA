/* 
 * Tabela tabelaHash usando lista explícita
 * by Joukim, 2019
 * Atualizado por Renato, 2023
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int UMPRIMO = 7;

class noh {
    friend class lista;
    friend class tabelaHash;
private:
    string chave;
    char tipo;
    int valor;
    noh* proximo;
    noh(const string& c = "", const char& t = 'a', const int& v = 0, noh* prox = NULL) :
        chave(c), tipo(t), valor(v), proximo(prox) { }
};

class lista {
    friend class tabelaHash;
private:
    noh* primeiro;
    unsigned short numElementos;
public:
    lista() : primeiro(NULL), numElementos(0) {}
    ~lista() {
        noh* atual = primeiro;
        while (atual != NULL) {
            noh* aux = atual;
            atual = atual->proximo;
            delete aux;
        }
    }
    unsigned short tamanho() { return numElementos; }
    void insere(const string& c, const char& t, const int& v) {
        noh* novo = new noh(c, t, v, primeiro);
        primeiro = novo;
        numElementos++;
    }
    bool remove(const string& c) {
        if (primeiro == NULL)
            return false;
        
        if (primeiro->chave == c) {
            noh* aux = primeiro;
            primeiro = primeiro->proximo;
            delete aux;
            numElementos--;
            return true;
        }
        
        noh* atual = primeiro;
        while (atual->proximo != NULL && atual->proximo->chave != c) {
            atual = atual->proximo;
        }
        
        if (atual->proximo == NULL)
            return false;
        
        noh* aux = atual->proximo;
        atual->proximo = aux->proximo;
        delete aux;
        numElementos--;
        return true;
    }
    bool busca(const string& c, char& tipoBuscado, int& valorBuscado) {
        noh* atual = primeiro;
        while (atual != NULL) {
            if (atual->chave == c) {
                tipoBuscado = atual->tipo;
                valorBuscado = atual->valor;
                return true;
            }
            atual = atual->proximo;
        }
        return false;
    }
    bool verificaOcorrencia(const string& c) {
        noh* atual = primeiro;
        while (atual != NULL) {
            if (atual->chave == c) {
                return true;
            }
            atual = atual->proximo;
        }
        return false;
    }
    void imprime() {
        noh* atual = primeiro;
        while (atual != NULL) {
            cout << "[" << atual->chave << "/" << atual->valor << "]";
            atual = atual->proximo;
        }
    }
};

class tabelaHash {
private:
    lista* tabela;
    unsigned numPosicoes;
public:
    tabelaHash(unsigned cap = 100) {
        numPosicoes = cap;
        tabela = new lista[cap];
    }
    ~tabelaHash() {
        delete[] tabela;
    }
    unsigned funcaoHash(const string& s) {
        unsigned pos = 0;
        for (unsigned i = 0; i < s.length(); i++)
            pos = (UMPRIMO * pos + s[i]) % numPosicoes;
        return pos;
    }
    bool insere(const string& c, const char& t, const int& v) {
        unsigned posicao = funcaoHash(c);
        if (tabela[posicao].verificaOcorrencia(c))
            return false;
        
        tabela[posicao].insere(c, t, v);
        return true;
    }
    bool valor(const string& c, char& tipoBuscado, int& valorRetorno) {
        unsigned posicao = funcaoHash(c);
        return tabela[posicao].busca(c, tipoBuscado, valorRetorno);
    }
    bool remove(const string& c) {
        unsigned posicao = funcaoHash(c);
        return tabela[posicao].remove(c);
    }
    void imprime() {
        for (unsigned i = 0; i < numPosicoes; i++) {
            cout << i << ": ";
            tabela[i].imprime();
            cout << endl;
        }
    }
};

int main() {
    int tamanhoTH;
    cin >> tamanhoTH;
    tabelaHash tabela(tamanhoTH);
    char comando;
    string chave;
    char tipo = 'a';
    int valor = -1;
    do {
        try {
            cin >> comando;
            switch (comando) {
            case 'i': // inserir
                cin >> chave >> tipo >> valor;
                if (!tabela.insere(chave, tipo, valor))
                    cout << "Erro na inserção: chave já existente!" << endl;
                else
                    cout << "chave '" << chave << "' inserida na posicao " << tabela.funcaoHash(chave) << endl;
                break;
            case 'r': // remover
                cin >> chave;
                if (!tabela.remove(chave))
                    cout << "Erro na remoção: chave não encontrada!" << endl;
                break;
            case 'l': // buscar
                cin >> chave;
                if (!tabela.valor(chave, tipo, valor))
                    cout << "Erro na busca: chave não encontrada!" << endl;
                else
                    cout << "Tipo: " << tipo << " Valor: " << valor << endl;
                break;
            case 'p': // mostrar estrutura
                tabela.imprime();
                break;
            case 'f': // finalizar
                // checado no do-while
                break;
            default:
                cerr << "comando inválido\n";
            }
        }
        catch (runtime_error& e) {
            cout << e.what() << endl;
        }
    } while (comando != 'f'); // finalizar execução
    tabela.imprime();
    cout << endl;
    return 0;
}






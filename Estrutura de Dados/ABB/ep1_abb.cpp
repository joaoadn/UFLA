#include <iostream>

class No {
public:
    int chave;
    No* esquerda;
    No* direita;

    No(int valor) {
        chave = valor;
        esquerda = nullptr;
        direita = nullptr;
    }
};

class ArvoreBinariaBusca {
private:
    No* raiz;

public:
    ArvoreBinariaBusca() {
        raiz = nullptr;
    }

    // Insere uma chave na árvore
    void inserir(int chave) {
        if (raiz == nullptr) {
            raiz = new No(chave);
        } else {
            No* atual = raiz;
            No* anterior = nullptr;

            while (atual != nullptr) {
                anterior = atual;

                if (chave < atual->chave)
                    atual = atual->esquerda;
                else
                    atual = atual->direita;
            }

            if (chave < anterior->chave)
                anterior->esquerda = new No(chave);
            else
                anterior->direita = new No(chave);
        }
    }

    // Remove uma chave da árvore
    bool remover(int chave) {
        return removerRecursivo(raiz, chave);
    }

    bool removerRecursivo(No*& no, int chave) {
        if (no == nullptr)
            return false;

        if (chave < no->chave)
            return removerRecursivo(no->esquerda, chave);
        else if (chave > no->chave)
            return removerRecursivo(no->direita, chave);
        else {
            if (no->esquerda == nullptr && no->direita == nullptr) {
                delete no;
                no = nullptr;
            } else if (no->esquerda == nullptr) {
                No* temp = no;
                no = no->direita;
                delete temp;
            } else if (no->direita == nullptr) {
                No* temp = no;
                no = no->esquerda;
                delete temp;
            } else {
                No* sucessor = encontrarMinimo(no->direita);
                no->chave = sucessor->chave;
                return removerRecursivo(no->direita, sucessor->chave);
            }

            return true;
        }
    }

    No* encontrarMinimo(No* no) {
        No* atual = no;
        while (atual->esquerda != nullptr)
            atual = atual->esquerda;
        return atual;
    }

    // Escreve as chaves em ordem
    void emOrdem() {
        emOrdemRecursivo(raiz);
        std::cout << std::endl;
    }

    void emOrdemRecursivo(No* no) {
        if (no != nullptr) {
            emOrdemRecursivo(no->esquerda);
            std::cout << no->chave << "/" << getNivel(no) << " ";
            emOrdemRecursivo(no->direita);
        }
    }

    // Escreve as chaves em pré-ordem
    void preOrdem() {
        preOrdemRecursivo(raiz);
        std::cout << std::endl;
    }

    void preOrdemRecursivo(No* no) {
        if (no != nullptr) {
            std::cout << no->chave << "/" << getNivel(no) << " ";
            preOrdemRecursivo(no->esquerda);
            preOrdemRecursivo(no->direita);
        }
    }

    // Obtém o nível de um nó na árvore
    int getNivel(No* no) {
        return getNivelRecursivo(raiz, no, 0);
    }

    int getNivelRecursivo(No* atual, No* no, int nivel) {
        if (atual == nullptr)
            return -1;
        if (atual == no)
            return nivel;

        int nivelBaixo = getNivelRecursivo(atual->esquerda, no, nivel + 1);
        if (nivelBaixo != -1)
            return nivelBaixo;

        nivelBaixo = getNivelRecursivo(atual->direita, no, nivel + 1);
        return nivelBaixo;
    }
};

int main() {
    ArvoreBinariaBusca arvore;

    while (true) {
        char comando;
        std::cin >> comando;

        if (comando == 'i') {
            int chave;
            std::cin >> chave;
            arvore.inserir(chave);
        } else if (comando == 'r') {
            int chave;
            std::cin >> chave;
            if (!arvore.remover(chave))
                std::cout << "ERRO" << std::endl;
        } else if (comando == 'o') {
            arvore.emOrdem();
        } else if (comando == 'p') {
            arvore.preOrdem();
        } else if (comando == 'f') {
            break;
        }
    }

    return 0;
}








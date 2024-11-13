/*
    MinHeap, para alteração de prioridade
    by joukim & bruno, 2019
    alterado em 2023 by Renato
*/

#include <iostream>
#include <utility>
#include <stdexcept>

using namespace std;

struct dado {
    string nomeTarefa;
    char tipoTarefa;
    int energiaGasta;
    int tempoEstimado;
    int prioridade;
};

bool operator>(dado d1, dado d2) {
    return d1.prioridade > d2.prioridade;
}

bool operator<(dado d1, dado d2) {
    return d1.prioridade < d2.prioridade;
}

ostream& operator<<(ostream& output, const dado& d) {
    output << "[" << d.nomeTarefa << "/" << d.tipoTarefa << "/" << d.energiaGasta << "/" << d.tempoEstimado << "/" << d.prioridade << "]";
    return output;
}

class MinHeap {
private:
    dado* heap;
    int capacidade;
    int tamanho;
    int pai(int i);
    int esquerdo(int i);
    int direito(int i);
    void corrigeDescendo(int i);
    void corrigeSubindo(int i);
public:
    MinHeap(int cap);
    ~MinHeap();
    void imprime();
    dado retiraRaiz();
    void insere(dado d);
    void alteraPrioridade(string nomeTarefa, int novaPrioridade);
};

MinHeap::MinHeap(int cap) {
    capacidade = cap;
    tamanho = 0;
    heap = new dado[capacidade];
}

MinHeap::~MinHeap() {
    delete[] heap;
}

int MinHeap::pai(int i) {
    return (i - 1) / 2;
}

int MinHeap::esquerdo(int i) {
    return 2 * i + 1;
}

int MinHeap::direito(int i) {
    return 2 * i + 2;
}

void MinHeap::corrigeDescendo(int i) {
    int esq = esquerdo(i);
    int dir = direito(i);
    int menor = i;

    if (esq < tamanho && heap[esq] < heap[menor])
        menor = esq;

    if (dir < tamanho && heap[dir] < heap[menor])
        menor = dir;

    if (menor != i) {
        swap(heap[i], heap[menor]);
        corrigeDescendo(menor);
    }
}

void MinHeap::corrigeSubindo(int i) {
    int p = pai(i);

    if (p >= 0 && heap[i] < heap[p]) {
        swap(heap[i], heap[p]);
        corrigeSubindo(p);
    }
}

void MinHeap::imprime() {
    if (tamanho == 0) {
        cout << "Heap vazia!" << endl;
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

dado MinHeap::retiraRaiz() {
    if (tamanho == 0) {
        throw runtime_error("Erro ao retirar raiz");
    }

    dado raiz = heap[0];
    heap[0] = heap[tamanho - 1];
    tamanho--;
    corrigeDescendo(0);

    return raiz;
}

void MinHeap::insere(dado d) {
    if (tamanho == capacidade) {
        throw runtime_error("Erro ao inserir");
    }

    heap[tamanho] = d;
    corrigeSubindo(tamanho);
    tamanho++;
}

void MinHeap::alteraPrioridade(string nomeTarefa, int novaPrioridade) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (heap[i].nomeTarefa == nomeTarefa) {
            heap[i].prioridade = novaPrioridade;
            break;
        }
    }

    if (i == tamanho) {
        throw runtime_error("Tarefa não encontrada");
    }

    corrigeSubindo(i);
    corrigeDescendo(i);
}

int main() {
    int capacidade;
    dado info;
    char comando;

    cin >> capacidade;
    MinHeap meuHeap(capacidade);

    do {
        try {
            cin >> comando;
            switch (comando) {
            case 'i': // Inserir
                cin >> info.nomeTarefa >> info.tipoTarefa >> info.energiaGasta >> info.tempoEstimado >> info.prioridade;
                meuHeap.insere(info);
                break;
            case 'r': // Remover
                try {
                    dado removido = meuHeap.retiraRaiz();
                    cout << removido.nomeTarefa << endl;
                }
                catch (runtime_error& e) {
                    cout << e.what() << endl;
                }
                break;
            case 'p': // Imprimir
                meuHeap.imprime();
                break;
            case 'f': // Finalizar
                // Checado no do-while
                break;
            case 'a': // Alterar prioridade
            {
                string nomeTarefa;
                int novaPrioridade;
                cin >> nomeTarefa >> novaPrioridade;
                meuHeap.alteraPrioridade(nomeTarefa, novaPrioridade);
                break;
            }
            default:
                cerr << "Comando inválido\n";
            }
        }
        catch (runtime_error& e) {
            cout << e.what() << endl;
        }
    } while (comando != 'f'); // Finalizar execução

    cout << endl;
    return 0;
}

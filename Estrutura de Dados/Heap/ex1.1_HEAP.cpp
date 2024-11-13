/*
    MaxHeap, para alteração de prioridade
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
    if (d1.prioridade != d2.prioridade)
        return d1.prioridade > d2.prioridade;
    else
        return d1.energiaGasta < d2.energiaGasta;
}

bool operator<(dado d1, dado d2) {
    if (d1.prioridade != d2.prioridade)
        return d1.prioridade < d2.prioridade;
    else
        return d1.energiaGasta > d2.energiaGasta;
}

ostream& operator<<(ostream& output, const dado& d) {
    output << "[" << d.nomeTarefa << "/" << d.tipoTarefa << "/" << d.energiaGasta << "/" << d.tempoEstimado << "/" << d.prioridade << "]";
    return output;
}

class MaxHeap {
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
    MaxHeap(int cap);
    ~MaxHeap();
    void imprime();
    dado retiraRaiz();
    void insere(dado d);
};

MaxHeap::MaxHeap(int cap) {
    capacidade = cap;
    tamanho = 0;
    heap = new dado[capacidade];
}

MaxHeap::~MaxHeap() {
    delete[] heap;
}

int MaxHeap::pai(int i) {
    return (i - 1) / 2;
}

int MaxHeap::esquerdo(int i) {
    return 2 * i + 1;
}

int MaxHeap::direito(int i) {
    return 2 * i + 2;
}

void MaxHeap::corrigeDescendo(int i) {
    int esq = esquerdo(i);
    int dir = direito(i);
    int maior = i;

    if (esq < tamanho && heap[esq] > heap[maior])
        maior = esq;

    if (dir < tamanho && heap[dir] > heap[maior])
        maior = dir;

    if (maior != i) {
        swap(heap[i], heap[maior]);
        corrigeDescendo(maior);
    }
}

void MaxHeap::corrigeSubindo(int i) {
    int p = pai(i);

    if (p >= 0 && heap[i] > heap[p]) {
        swap(heap[i], heap[p]);
        corrigeSubindo(p);
    }
}

void MaxHeap::imprime() {
    if (tamanho == 0) {
        cout << "Heap vazia!" << endl;
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

dado MaxHeap::retiraRaiz() {
    if (tamanho == 0) {
        throw runtime_error("Erro ao retirar raiz");
    }

    dado raiz = heap[0];
    heap[0] = heap[tamanho - 1];
    tamanho--;
    corrigeDescendo(0);

    return raiz;
}

void MaxHeap::insere(dado d) {
    if (tamanho == capacidade) {
        throw runtime_error("Erro ao inserir");
    }

    heap[tamanho] = d;
    tamanho++;
    corrigeSubindo(tamanho - 1);
}

int main() {
    int capacidade;
    dado info;
    char comando;

    cin >> capacidade;
    MaxHeap meuHeap(capacidade);

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
                    cout << meuHeap.retiraRaiz().nomeTarefa << endl;
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










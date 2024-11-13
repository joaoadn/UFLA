#include <iostream>
#include <utility>
#include <stdexcept>
#include <vector>
#include <algorithm>

using namespace std;

struct dado {
    string nomeTarefa;
    char tipoTarefa;
    int energiaGasta;
    int tempoEstimado;
    int prioridade;
};

bool operator>(dado d1, dado d2) {
    if (d1.prioridade != d2.prioridade) {
        return d1.prioridade > d2.prioridade;
    } else {
        return d1.tempoEstimado < d2.tempoEstimado;
    }
}

bool operator<(dado d1, dado d2) {
    if (d1.prioridade != d2.prioridade) {
        return d1.prioridade < d2.prioridade;
    } else {
        return d1.tempoEstimado > d2.tempoEstimado;
    }
}

ostream& operator<<(ostream& output, const dado& d) {
    output << "[" << d.nomeTarefa << "/" << d.tipoTarefa << "/" << d.energiaGasta << "/" << d.tempoEstimado << "/" << d.prioridade << "]";
    return output;
}

class MinHeap {
private:
    vector<dado> heap;
    void corrigeDescendo(int i);
    void corrigeSubindo(int i);
public:
    MinHeap(int capacity);
    void imprime();
    dado retiraRaiz();
    void insere(dado d);
};

MinHeap::MinHeap(int capacity) {
    heap.reserve(capacity);
}

void MinHeap::corrigeDescendo(int i) {
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;
    int menor = i;

    if (esq < heap.size() && heap[esq] < heap[menor])
        menor = esq;

    if (dir < heap.size() && heap[dir] < heap[menor])
        menor = dir;

    if (menor != i) {
        swap(heap[i], heap[menor]);
        corrigeDescendo(menor);
    }
}

void MinHeap::corrigeSubindo(int i) {
    int p = (i - 1) / 2;

    if (p >= 0 && heap[i] < heap[p]) {
        swap(heap[i], heap[p]);
        corrigeSubindo(p);
    }
}

void MinHeap::imprime() {
    if (heap.empty()) {
        cout << "Heap vazia!" << endl;
        return;
    }

    for (const auto& d : heap) {
        cout << d << " ";
    }
    cout << endl;
}

dado MinHeap::retiraRaiz() {
    if (heap.empty()) {
        throw runtime_error("Erro ao retirar raiz");
    }

    dado raiz = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    corrigeDescendo(0);

    return raiz;
}

void MinHeap::insere(dado d) {
    heap.push_back(d);
    corrigeSubindo(heap.size() - 1);
}

int main() {
    int numComandos;
    cin >> numComandos;

    MinHeap minHeap(numComandos);

    for (int i = 0; i < numComandos; i++) {
        char comando;
        cin >> comando;

        if (comando == 'r') {
            try {
                dado tarefa = minHeap.retiraRaiz();
                cout << tarefa.nomeTarefa << endl;
            } catch (const exception& e) {
                cout << e.what() << endl;
            }
        } else if (comando == 'p') {
            minHeap.imprime();
        } else if (comando == 'i') {
            dado novaTarefa;
            cin >> novaTarefa.nomeTarefa >> novaTarefa.tipoTarefa >> novaTarefa.energiaGasta >> novaTarefa.tempoEstimado;
            novaTarefa.prioridade = 1; // Definindo a prioridade inicial como 1
            minHeap.insere(novaTarefa);
        }
    }

    return 0;
}



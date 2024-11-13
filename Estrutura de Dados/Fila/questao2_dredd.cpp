#include <iostream>
using namespace std;

struct fila{
    int inicio;
    int fim;
    int tamanho;
};

void empilha(int valor, int posicao, int fila[]){

    fila[posicao]=valor;
}

int main(){
    int tamanho;

    cin >> tamanho;

    int FilaPrincipal[tamanho];

    int inicioFila = 0;
    int fimFila=0;

    int cont=-1;

    int valor;

    while(cont<(tamanho-1)){
        cont++;
        cin >> valor;
        empilha(valor, cont, FilaPrincipal);
        fimFila=cont;

    }

    int tamanhoSubFila;

    cin >> tamanhoSubFila;

    int SubFila[tamanhoSubFila];

    int AUXpos=0;

    int controlaSubfila=0;

    int aux;

    int contSubFila=0;

    while(contSubFila<=(tamanho-tamanhoSubFila)){
        controlaSubfila=AUXpos;

        for(int i= 0; i < tamanhoSubFila; i++){
            aux = FilaPrincipal[controlaSubfila];
            SubFila[i]=aux;
            controlaSubfila++;
        }

        AUXpos++;

        contSubFila++;
    }



    return 0;
}


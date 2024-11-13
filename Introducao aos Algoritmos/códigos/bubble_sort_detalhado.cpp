#include <iostream>
using namespace std;
void imprimir(int v[], int N, int troca, int x, int y){
	int i = 0;
	
	while(i < N){
		if((i == x or i == y) and troca == 0){
			cout << v[i] << " *" << "\t";
		}
		else if((i == x or i == y) and troca ==1){
			cout << v[i] << " t" << "\t";
		}
		else if ((i != x or i != y) and troca ==1){
			cout << v[i] << "\t";
		}
		i++;
	}

}

void bubble_sort(int vetor[], int N) {
    int aux;
    int troca;
    int x = -1;
    int y = -1;
    int i = 0;
    int j = 0;

    while(i < N-1){
		for(j = 0; j < N - i - 1; j++){	
			if (vetor[j+1] < vetor[j]){	
				troca = 1;
				y = j+1;
				imprimir(vetor, N, troca, j, y);	
				aux = vetor[j];
				vetor[j] = vetor[y];
				vetor[y] = aux;				
			}
			else{
				troca = 0;
				y = j+1;
				imprimir(vetor, N, troca, j, y);	
			}
		}
		i++;
	}
	
	imprimir(vetor, N, troca, x, y);
}


int main(){
	
	int i = 0;
	int N;
	cin >> N;
	int v[N];
	
	for(i = 0; i<N; i++){
		cin >> v[i];		
	}
	
	bubble_sort(v, N);
	
	return 0;
	
}






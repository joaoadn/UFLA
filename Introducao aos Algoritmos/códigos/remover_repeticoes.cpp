#include <iostream>
#include <fstream>
using namespace std;

void remover_repeticoes(int arr[], int N, int i){
	int j;
	
	for (i=0; i < N; i++){
		for(j=i+1; j<N; j++){
			if(arr[i]==arr[j]){
				for(int aux=j; aux < N-1; aux++)
					arr[aux]=arr[aux+1];
			N--;
			i--;
			}
        else
            j++;
    }
}
	
	ofstream arquivo_saida("saida.txt");
	
	for(i=0; i<N; i++){		
		arquivo_saida << arr[i] << " ";
	}
}

int main(){
	
	int i = 0; 
	int N;
	int numeros;
	
	ifstream arquivo_entrada("entrada.txt");
	
	arquivo_entrada >> N;
	int arr[N];
			
		for(int aux = 0; aux < N; aux++){
			arquivo_entrada >> numeros;
			 arr[i] = numeros;
			 i++;
		}
		
	remover_repeticoes(arr,N,i);

	return 0;
}

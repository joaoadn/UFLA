#include <iostream>
using namespace std;
void selecao (int v[], int sz){ 
	int posm;
	int aux;
	sz++;
  
	for (int i = 0; i < sz - 1; i++) {
		posm = i;
		for (int j = i + 1; j < sz; j++) {
			if (v[j] > v[posm])
				posm = j;
    }
	aux = v[i];
	v[i] = v[posm];
	v[posm] = aux;
	}
}

int main(){
	int sz;
	int indice;
	int i = 0;

	cin >> sz;

	int v[sz]; 

	for(i = 0; i < sz; i++){
		cin >> v[i];
	}
	
	cin >> indice; 

	selecao(v, indice); 

	for(i = 0; i < sz; i++){ 
		cout << v[i] << " "; 
	}

	return 0;
}


#include <iostream>
using namespace std;
void quickSort (int v[], int esq, int dir){
	int i, j, aux, pivo, maiorElemento = 0, menorElemento = 1000;
	i = esq;
	j = dir;
	pivo = v[(esq + dir)/2];
	while (i <= j) {
		while (v[i] < pivo) {
			i++;
		}
		while (v[j] > pivo)	{
			j--;
		}
		if (i <= j)	{
			
			if((v[i] >= maiorElemento) and (v[j] <= menorElemento)){
				maiorElemento = v[i];
				menorElemento = v[j];
			}
						
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}
	
	if ((maiorElemento > menorElemento) or (maiorElemento < menorElemento)){
		cout << maiorElemento << " " << menorElemento << endl;
	}
	
	else if ((maiorElemento == menorElemento)){
		cout << -1 << " " << -1 << endl;
	}
	
	if (esq < j) {
		quickSort(v, esq, j);
	}
	if (i < dir) {
		quickSort(v, i, dir);
	}
}
 
int main (){
   
	int N;
	
	cin >> N;
		
	int v[N];
	int i;
	
	for (i = 0; i < N; i++){		
	cin >> v[i];
	}
	
	int esq = 0; 
	int dir = (N - 1);

	quickSort (v,esq,dir);
		
	return 0;	
}



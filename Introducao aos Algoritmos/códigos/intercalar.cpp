#include <iostream>
using namespace std;
void intercalar(char vet1[],int m, char vet2[], int n, char vet[], int x){
	
	int j = 0;
	int k = 0;

	for(int i = 0; i < x; i++){

		if(vet1[j] < vet2[k] and j < m){
		vet[i] = vet1[j];
		j++;
		}
		else if(vet1[j] >= vet2[k] and k < n){
		vet[i] = vet2[k];
		k++;
		}
		else if(j==m){
		vet[i] = vet2[k];
		k++;
		}
		else if(k==n){
		vet[i] = vet1[j];
		j++;
		}	
		
	cout << vet[i] << " ";
			
	}	
}

int main (){
	
	int m;
	int n;
	int i = 0;
	
	cin >> m >> n;
	
	int x = m + n;
	char vet1[m];
	char vet2[n];
	char vet[x];
	
	for (i = 0; i < m; i++){
	cin >> vet1[i];
	}
	
	for (i = 0; i < n; i++){
	cin >> vet2[i];
	}

	intercalar(vet1,m,vet2,n,vet,x);
	
	return 0;
	
}
	
	
	


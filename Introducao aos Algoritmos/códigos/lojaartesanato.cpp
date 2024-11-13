#include <iostream>
using namespace std;
int main (){
	
	int N = 10;
	int valorU[N]; 
	int qtdV[N]; 
	int total[N]; 
	int i = 0;
	int valorTotal = 0;
	int pos = 0;
	int sal = 0;
	int maisVendido = 0;
	int aux = 0;
	
	for (i = 0; i < 10; i++){

		cin >> valorU[i] >> qtdV[i];
	
		total[i] = valorU[i] * qtdV[i];
		valorTotal += total[i];
	}
	
	sal = 900 + ((valorTotal * 5) / 100);
	
	for (i = 0; i < 10; i++){
		
		if(qtdV[i] > aux){
			aux = qtdV[i];
			maisVendido = valorU[i];
			pos = i;			
		}
	}
	
	for (i=0; i < 10; i++){
	
		cout << qtdV[i] << " " << valorU[i] << " " << total[i] << endl;
		
	}
	
	cout << valorTotal << " " << sal << endl;
	cout << maisVendido << " " << pos << endl;
	
	return 0;
	
}




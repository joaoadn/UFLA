#include <iostream>
using namespace std;

int main(){
	int codigoProduto;
	float pesoKg;
	float pesoG;
	int codigoPais;
	float precoBruto;
	float imposto;
	float precoTotal;
    
	cin >> codigoProduto;
	cin >> pesoKg;
	cin >> codigoPais;
	
	pesoG = pesoKg * 1000;
	
	
	if ((codigoProduto >= 1 and (codigoProduto <= 10)) and ((codigoPais >= 1) and (codigoPais <= 3))){
		pesoG = pesoKg * 1000;
	}
	
	if ((codigoProduto >= 1) and (codigoProduto <= 4)){
		precoBruto = pesoG * 10;
	}
	
	else if ((codigoProduto >= 5) and (codigoProduto <= 7)){
		precoBruto = pesoG * 25;
	}
	
	else if ((codigoProduto >= 8) and (codigoProduto <= 10)){
		precoBruto = pesoG * 35;
	}
	
	if ((codigoPais == 1)){
		imposto = 0;
	}
		
	
	if ((codigoPais == 2)){
		imposto = (15 * precoBruto) / 100;
		
	}
	
	
	if ((codigoPais == 3)){
		imposto = (25 * precoBruto) / 100;
		
	}
	
	precoTotal = (precoBruto + imposto);
	
	cout << pesoG << endl;
	cout << precoBruto << endl;
	cout << imposto << endl;
	cout << precoTotal << endl;

	return 0;
}
	
	

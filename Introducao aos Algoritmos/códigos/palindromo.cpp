#include <iostream>
using namespace std;

int main(){
	string vermelho;
	string azul;
	int numero;
	int invertido=0;
	
	cin >> vermelho;
	cin >> azul;
	cin >> numero;
	
	invertido = ((((((numero % 10) / 10 + numero % 10 / 10) + numero % 10 / 10) + numero % 10 / 10) + numero % 10 / 10) +  numero % 10 / 10);
	
	if (numero == invertido){
		cout << azul << endl;
	}
	
	if ((numero =! invertido)){
		cout << vermelho << endl;
	}
	
	return 0;
}

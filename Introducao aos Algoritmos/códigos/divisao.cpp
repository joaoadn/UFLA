#include <iostream>
using namespace std;

int main(){
	
	int numerador;
	int denominador;
	
	cin >> numerador;
	cin >> denominador;
	
	if (denominador == 0){
		cout << "erro" << endl;
	}
		
		
	else if (denominador > 0){
		cout << (numerador / denominador) << endl;
		cout << (numerador % denominador) << endl;
	}
	
	return 0;
}

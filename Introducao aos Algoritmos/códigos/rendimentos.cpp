#include <iostream>
using namespace std;

int main(){
	
	int tipo;
	float valor;
	float investimento;
	
	cin >> tipo;
	cin >> investimento;
	
	if((tipo == 1)){
		valor = investimento + ((investimento * 5) / 1000);
	}
	
	else if ((tipo == 2)){
	valor = (investimento - 30) + ((investimento * 3) / 100);
}
    if ((tipo == 1) or (tipo == 2)){
    cout << valor << endl;
}
    return 0;
    
}





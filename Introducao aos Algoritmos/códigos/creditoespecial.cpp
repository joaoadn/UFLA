#include <iostream>
using namespace std;

int main(){
	
	float saldo;
	float credito;
	
	cin >> saldo;
	
	    if(saldo > 1600){
		credito = 30 * saldo / 100;
		}
		if ((saldo >= 800) and (saldo <= 1600)){
			credito = 25 * saldo / 100;
		}
		
		else if ((saldo >= 400) and (saldo < 800)){
			credito = 20 * saldo / 100;
		}
		
		else if ((saldo >= 200) and (saldo < 400)){
			credito = 15 * saldo / 100;
		}
		
		else if ((saldo > 0) and (saldo < 200)){
			credito = 10 * saldo / 100;
		}
		
		else if ((saldo = 0)){
			credito = 0;
		}
		
		cout << saldo << endl;
		cout << credito << endl;
		
		return 0;
}

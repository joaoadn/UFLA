#include <iostream>
using namespace std;

int main(){
	
	float saldo;
	
	cin >> saldo;
	
	if(saldo > 400){
		cout << (saldo * 30) / 100 << endl;
		}
		if (saldo > 300 and saldo <= 400){
			cout << ((saldo * 25) / 100) << endl;
		}
		
		if (saldo > 200 and saldo <= 300){
			cout << ((saldo * 20) / 100) << endl;
		}
		
		if (200 >= saldo){
			cout << ((saldo * 10) / 100) << endl;
		}
		
		return 0;
}

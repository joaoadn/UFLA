#include <iostream>
using namespace std;

int main(){
	
	int energiaTotal;
	int tempodaLuta;
	int socos;
	int energiaRestante;
	
	cin >> energiaTotal;
	
	cin >> tempodaLuta;
	
	socos = tempodaLuta * 120;
	
	energiaRestante = energiaTotal - (socos * 12);
	
	cout << socos << endl;
	cout << energiaRestante << endl;
	
	return 0;

}

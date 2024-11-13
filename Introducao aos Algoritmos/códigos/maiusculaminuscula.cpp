#include <iostream>
using namespace std;

int main(){
	
	char letra;
	
	cin >> letra;
	
	if ((letra >= 65) and (letra <= 90)){
		cout << "MAIUSCULA" << endl;
	}
	
	else if ((letra >= 97) and (letra <= 123)){
		cout << "MINUSCULA" << endl;	
	}
	
	return 0;
}
	



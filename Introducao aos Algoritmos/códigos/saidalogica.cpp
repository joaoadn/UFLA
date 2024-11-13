#include <iostream>
using namespace std;
int main (){
	
	int divisor;
	int numero;
	
	cin >> divisor;
	
	do{
    cin >> numero;
	(numero % divisor);
		
	if((numero % divisor) == 2)
	cout << (numero/divisor) << endl;
	 
   }while((numero % divisor) != 2);
   
	
	return 0;
}


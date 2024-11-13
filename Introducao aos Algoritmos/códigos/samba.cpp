#include <iostream>
using namespace std;
int tempo(char e,int i,int f){
	
	int aux = 0;
	int x = 0;
    aux = (f - i);
    
    if ((aux < 55) or (aux > 65))
   (x += 0.1 * ( 55 - aux)) or (x += 0.1 * (aux - 65));
   
	 return aux;
 

}

int main (){
	
	char escola;
	int inicio;
	int fim;
	
	
	cin >> escola;
	cin >> inicio;
	cin >> fim;

	
	cout << tempo(escola,inicio,fim) << endl;
	
	return 0;
	
}
	
	
	
	
	

#include <iostream>
using namespace std;	
int capicua (int n){
    
    int rev = 0;
	while(n>0) {
	     int inv = n%10;
	     rev = (rev*10)+inv;
	     n /= 10;    
    }    
    return rev;
}
	      
int main (){
	
	int numero;
		
	cin >> numero;
		
	capicua(numero);
		
	if (capicua(numero) == numero){
	cout << "sim" << endl;
	}
		
	else
	cout << "nao" <<endl;
			
    return 0;  
}


	


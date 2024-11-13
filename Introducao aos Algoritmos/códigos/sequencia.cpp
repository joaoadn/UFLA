#include <iostream>
using namespace std;
int main (){
	
	int sequencia;
	float media;
	int positivos=0.0;
	int negativos=0.0;
	float perPositivos;
	float perNegativos;
	float c=0;
	int linha=0;
	
	do{
			
		cin >> sequencia;
		c++;

		if (sequencia == 0)
	    c = (c - 1);	  
		linha += sequencia;
		media = linha / c;
		
		if (sequencia > 0)
		positivos++;
		perPositivos = positivos / c;
	
		if (sequencia < 0)
		negativos++;
		perNegativos = negativos / c;

	}while (sequencia != 0);
	
    cout << media << endl;
    cout << positivos << endl;
    cout << negativos << endl;
    cout << perPositivos << endl;
    cout << perNegativos << endl;    
    
   return 0;
   
}

   


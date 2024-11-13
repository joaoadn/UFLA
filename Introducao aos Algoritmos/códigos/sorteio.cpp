#include <iostream>
using namespace std;
int main (){
    
    int ingressos;
    int numeroIngresso;
    int posicao=0;
    int premiado=0;
    int c=0;
    
    cin >> ingressos;
        
		do{
			
			cin >> numeroIngresso;
			posicao++;
			c++;
		
			if(numeroIngresso == posicao)
            premiado = numeroIngresso;
            		
				   
		}while ((ingressos != c) and (posicao != numeroIngresso));
	
			
	cout << premiado << endl;
	
	return 0;	
	
}
	    
	    


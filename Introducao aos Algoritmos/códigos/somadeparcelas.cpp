#include <iostream>
using namespace std;
double soma (int P){
	   
	   double S = 0;
	   double aux = 0;
	   double n = 1;
	   int cont = 0;
     
       while (cont != P){	 
             aux = n * ((n + 1) / (n + 3));
             n++;
             cont++;
             S += aux;
       } 
       return S;
}	   

int main (){
    int parcelas; 
    
    cin >> parcelas;
     
    if (parcelas > 0)
    
    cout << soma(parcelas) << endl;
    
    return 0;
}	

		
	


		
		


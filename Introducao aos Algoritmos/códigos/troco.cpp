#include <iostream>
using namespace std;

int main(){
	
	int pago;
	int total;
	int troco;
	int vinte=0;
	int dez=0;
	int cinco=0;
	int dois=0;
	int um=0;
	
	cin >> pago;
    cin >> total;
	
	troco = pago - total;
	
	if (troco%20 == 0){
		vinte = troco/20;
	}
		
	else if (troco%20 > 0){                                                                                                                                                                                                                                                                                          
		
		     vinte = (troco - troco%20)/20;
		     troco = troco%20;
		 
	     if ((troco > 10) or (troco = 10)){
		 
	     if (troco%10 == 0){
		 dez = troco/10;
	 }
		 
		 else if (troco%10 > 0){
			      dez = (troco - troco%10)/10;
			      troco = troco%10;
		  
	  if ((troco > 5) or (troco = 5)){
		  
	  if (troco%5 == 0){
		  cinco = troco/5;
		  cinco =! 0;
	  }
		  
		  else if (troco%5 > 0){
			       cinco = (troco - troco%5)/5;
			       cinco =! 0;
			       troco = troco%5;
			   
	   if ((troco > 2) or (troco = 2)){
		
	   if (troco%2 == 0){
		   dois = troco/2;
	   }
		   
		   else if (troco%2 > 0){
		        dois = (troco - troco%2)/2;
			    troco = troco%2;
			    um = troco; 
			    
			           
		                        }
		                     }
	                     }
                    }
               }
           }

        }
        
	
		cout << vinte << endl;
		cout << dez << endl;
		cout << cinco << endl;
		cout << dois << endl;
		cout << um << endl;
		
		return 0;
	}
		

		
	


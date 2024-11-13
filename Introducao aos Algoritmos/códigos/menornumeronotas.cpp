#include <iostream>
using namespace std;

int main(){
	
	int troco;
	int cem=0;
	int cinquenta=0;
	int vinte=0;
	int dez=0;
	int cinco=0;
	int dois=0;
	int um=0;
	
	cin >> troco;
	
	if (troco%100 == 0){
		vinte = troco/100;
	}
		
	else if (troco%100 > 0){                                                                                                                                                                                                                                                                                          
		
		     cem = (troco - troco%100)/100;
		     troco = troco%100;
		 }
		 
	if (troco%50 == 0){
		vinte = troco/50;
	}
		
	else if (troco%50 > 0){                                                                                                                                                                                                                                                                                          
		
		     cem = (troco - troco%50)/50;
		     troco = troco%500;
		 }	 
	
	
	
	if (troco%20 == 0){
		vinte = troco/20;
	}
		
	else if (troco%20 > 0){                                                                                                                                                                                                                                                                                          
		
		     vinte = (troco - troco%20)/20;
		     troco = troco%20;
		 
	     if (troco >= 10){
		 
	     if (troco%10 == 0){
		 dez = troco/10;
	 }
		 
		 else if (troco%10 > 0){
			      dez = (troco - troco%10)/10;
			      troco = troco%10;
		  
	  if (troco >= 5){
		  
	  if (troco%5 == 0){
		  cinco = troco/5;
	  }
		  
		  else if (troco%5 > 0){
			       cinco = (troco - troco%5)/5;
			       troco = troco%5;
			   
	   if (troco >= 2){
		
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
        
		if (troco >= 2){
			
		if (troco%2 == 0){
			dois = troco/2;
		}
			
		else if (troco%2 > 0){
			dois = (troco - troco%2) / 2;
			troco = troco%2;
			um = troco;
			
		if (troco >= 5) {
			
		if (troco%5 == 0){
			cinco = troco/5;
		}
			
		else if (troco%5 > 0){
			cinco = (troco - troco%5) / 5;
			troco = troco%5;
		
		if (troco >= 2) {
			
		if (troco%2 == 0){
			dois = troco/2;
		}
			
		else if (troco%1 > 0){
			um = (troco - troco%1) / 1;
			troco = troco%1;
			um = troco;
		}
			
			else if (troco%1 > 0){
			um = (troco - troco%1) / 1;
			troco = troco%1;
			um = troco;
									
		    }
		 }
	  }
   }
}

}		

        cout << cem << endl;
        cout << cinquenta << endl;
		cout << vinte << endl;
		cout << dez << endl;
		cout << cinco << endl;
		cout << dois << endl;
		cout << um << endl;
		
		return 0;
	}


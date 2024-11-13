	#include <iostream>
	using namespace std;
	int main (){
		
		int valor1=0;
		int valor2=0;
		int c=2;
		int mmc=1;
		
		cin >> valor1 >> valor2;
		
		
		    while((valor1 + valor2) != 2){
			          
			      if ((valor1 % c == 0) or (valor2 % c == 0))
			      mmc = (mmc * c);
			      
			      if (valor1 % c == 0){
			      valor1 = valor1/c;
			  }
			  
			      if (valor2 % c == 0){
				  valor2 = valor2/c;
			  }  
			  	     
			      else
			      c++;  
			          		       	           	        	      		      
	}
	     cout << mmc << endl;
	     
	     return 0;
	}
    

    


    
	

	




		
		
		
		
	
	
	

	

#include <iostream>
using namespace std;
int main (){
	
	int N;
	int divisor = 0;
	int resultado = 0;
    
    cin >> N;
    
    if (N >= 2){
	
	while (divisor <= N){ 
		  
		   divisor++;
		  
		      if (N % divisor == 0){
		      resultado += divisor;
	       }
  
		          if ((N % divisor == 0) and (divisor < N)){
			     	  
	  				    
		          cout << divisor << "+";
	    
	       }
		  
		      if ((divisor == N)){
			  
			 
	         cout << divisor << "=" << resultado;
	     
	       }
	       
     }
    
} 
   return 0;
}



   





	
	
	
    

	
	
	
	

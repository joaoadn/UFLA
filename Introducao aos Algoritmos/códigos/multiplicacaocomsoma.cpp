#include <iostream>
using namespace std;
int main (){
	
	int t1;
	int t2;
	int ac=0;
	
    cin >> t1;
    cin >> t2;
    
		  if((t1 > 0) and (t2 > 0)){
	  
		  while((ac / t1) < t2){
			  
			  ac += t1; 
			  cout << ac << endl;	  
	  }
	      
   }
   
          if((t1 == 0) or (t2 == 0)){
				  cout << '0' << endl;
			  }
			  
     return 0;
 }

#include <iostream>
using namespace std;
int quantidade(int e){
		
	if (e >= 2){
	return quantidade(e - 1) + quantidade(e - 2);
    }
      
    return e;
     
}

int main (){
	
	int etapas;
	int aux=1;
	
	cin >> etapas;
	
	if (etapas == 0){
	cout << 0 << endl;
	}
	
	else{
	   while (aux <= etapas){	  	     
	          cout << quantidade(aux) << " ";
	          aux++;      
        }

     }
	return 0;
}
	


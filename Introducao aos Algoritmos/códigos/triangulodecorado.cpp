#include <iostream>
using namespace std;
int main (){
	
	int altura, linhas = 1;
	
	cin >> altura;
	
	while (linhas <= altura){
		int c = 1;
	while (c <= linhas){
	       cout << "@";
	       c++;
	 if (linhas >= c){
		cout <<"#";
	    c++;
	} 
	  }
	
	cout << "\n";
	
	linhas++;	
}
   
    return 0;
    
}




	

		
	

   

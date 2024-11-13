#include <iostream>
using namespace std;
int main (){
	
	int termos;
	float fatorial=0;
	int c = 1;
	int cc;
	double euler;
	
	cin >> termos;
	cc = termos;
	
	if (termos > 0){
		
	do{
		   cc--;   	
		   
		   if (cc > 0){
		   termos = termos * c;
	   }

		   
		   c++;  

		       

	 }while ((termos >= c) and (fatorial != termos));
	 
 }
		
	cout << termos << endl;
}
		
	


		
		


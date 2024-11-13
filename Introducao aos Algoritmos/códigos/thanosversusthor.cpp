#include <iostream>
using namespace std;
int main ()
{
	double thanos;
	double thor;
	int trocas=0;
	double energiathanos;
	double energiathor;
	
	  cin >> thanos;
	  cin >> thor;

	    do{
			trocas++;
			energiathanos = thanos - ((thanos * 2) / 100);
			thanos = energiathanos;
			energiathor = thor - ((thor * 6) / 100);
			thor = energiathor;
			
			}while(thor > thanos);
	
	 cout << trocas << endl;
		
     return 0;
        
}
   
     

     

	

       

	


	
	
	
	
	



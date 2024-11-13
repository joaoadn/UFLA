#include <iostream>
using namespace std;
int main (){
	
	int h = 0;
	int m = 0;
	int vetH[100];
	int vetM[100];
	int consultaH;
	int consultaM;
	int aux = 0;
	int aux2 = 0;
	int pcg;
	int i;
	
	cin >> h;
	
	for(i = 0; h > 0; i++){
		aux++;
		pcg = ((aux * 70) / 100);
		
		cin >> m;
		
		vetH[i] = h;
		vetM[i] = m;
		
		cin >> h;
	}
	
	cin >> consultaH >> consultaM;

	cout << vetH[pcg] << ":" << vetM[pcg] << endl;
	
	for (i = 0; i < aux; i++)
		
		if((vetH[i] == consultaH) and (vetM[i] <= consultaM)){
			aux2++;
		}
		else if(vetH[i] < consultaH){
			aux2++;
		}
	double pEntregue =  float(aux2 * 100) / aux;	
		
	cout << pEntregue << endl;
	
	return 0;	
}

	


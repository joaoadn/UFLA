#include <iostream>
using namespace std;
void busca(int N,int v[],int x){
	
	int cont = 0;
	int p = -1;
	int pI = 0;
	int pF = N - 1;
	int m;
 
	while(pI <= pF){
		m = (pI + pF)/2;
		if (x == v[m]){
			p = m;
			pI = pF + 1;
		}
		else{
			if (x > v[m])
			pI = m + 1;
			else pF = m - 1;
		}
		cont++;	
	}
	cout << p << endl;
	cout << cont << endl;
}

int main (){
   
	int x;
	int N;
	
	cin >> N;
		
	int v[N];
	int i;
	
	for (i = 0; i < N; i++)
	
	cin >> v[i];
	cin >> x;
	
	busca(N,v,x);
	
	return 0;	
	
}


			



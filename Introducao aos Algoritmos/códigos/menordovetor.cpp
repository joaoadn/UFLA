#include <iostream>
using namespace std;
int menor(int N, int v[]){

	int x = v[0];
	int cont = 0;
	
	if (N != 1){
		x = menor(N-1,v);
	}
	
	for(int cont = 0; cont < N; cont++)
		if (v[cont] < x){
		x = v[cont];
		}
		
	while((cont < N) and (v[cont] != x))
		cont++;	

	return x;	
}

int pos(int N, int v[]){

	int p = -1;
	int x = v[0];
	int cont = 0;
	
	if(N != 1){
		p = pos(N-1,v);
	}
	
	for(int cont = 0; cont < N; cont++)
		if (v[cont] < x){
		x = v[cont];
		}
		
	while((cont < N) and (v[cont] != x))
		cont++;	
		
	if((cont != N) and (v[cont] == x))
		p = cont;
		
	return p;
	
}

int main (){
	
	int N;
	
	cin >> N;
	
	int v[N];
	int i;
	
	for (i = 0; i < N; i++)
	
		cin >> v[i];
	
	cout << menor(N,v) << " " << pos(N,v);
	
	return 0;	
	
}


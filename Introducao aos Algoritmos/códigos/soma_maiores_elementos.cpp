#include <iostream>
using namespace std;
int main(){

  int N;
  int y;
  int i = 0;
  int aux;
  int soma = 0;
  int K;  

  cin >> N; 

  int v[N]; 

	for(i = 0; i < N; i++){
	  cin >> v[i];
	}
	
	if((i = 1)){
	while(i < N){
		y = v[i];
		aux = i - 1;
	
	if(i < N){
		while(y > v[aux]){
			v[aux + 1] = v[aux];
			aux--;	
		

    v[aux+1] = y;
  
	}
	i++;
	}
	}
	}
		
	cin >> K;	
	
	for(i = 0; i < K; i++){
		soma += v[i];
	}
	
	cout << soma << endl;

	return 0;
}







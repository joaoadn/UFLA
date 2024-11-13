#include <iostream>
using namespace std;
int reverso (int n){
	
	int r = 0;
	
	while(n>0){
	
	int aux = n % 10;
	r = (r*10) + aux;
	n = n / 10;
	}
	
	return r;
}

int main (){
	
	int N;
	
	cin >> N;
	
	cout << reverso(N) << endl;
	
	return 0;
	
}
	


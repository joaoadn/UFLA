#include <iostream>
using namespace std;
int conjunto(int n,int k){
	
    if ((k == 0) and (n != k)){
	return 1;
	}  
    
    if (k == n){
	return 1;
    }  
    
    if (n != k){
	return conjunto(n-1,k-1) + conjunto(n-1,k);
    }
    
    return conjunto (n,k); 
}

int main (){
	
	int N;
	int K;
		
	cin >> N >> K;
	
	cout << conjunto(N,K) << endl;
    
	
    return 0;	
	
}


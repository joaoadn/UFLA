#include <iostream>
using namespace std;
int main( ){
	
	int x;
	string palavra = " ";
	
	while(palavra == " "){
		
		cin >> palavra;
	}
	
	for(int i=0;i<x;i++){
		x=palavra.length();
		
		if(palavra[i]!= palavra[i+1]){
			
			cout << palavra[i];
		}
	}
    return 0;
}







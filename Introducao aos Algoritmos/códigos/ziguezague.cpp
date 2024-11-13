#include <iostream>
using namespace std;
int main (){
	int l; 
	int c;
	
	cin >> l >> c;
	
	int m[l][c];
	int x;
	int y;
	int i;
	int j;
	
	for(x = 0; x < l; x++){
		for(y = 0; y < c; y++){
			cin >> m[x][y];
		}
	}
	
	for(i = 0; i < l; i++){
		
		if(i == 0 or i % 2 == 0){ 
			for(int j = c - 1; j >= 0; j--){
				cout << m[i][j] << " ";
			}
		} 
		else if(i != 0 or i % 2 != 0){
			for(j = 0; j < c; j++){	
				cout << m[i][j] << " ";
			}
		}
		
	}
	return 0;
}





#include <iostream>
using namespace std;
int main(){
    
    int l = 5;
    int c = 5; 
    int bingo;
    int pos=0;
    int diagP = 1;
    int diagS = 1;
    float M[l][c];
	for (int i = 0; i < l; i++)
	for (int j = 0; j < c; j++)
   		 
	cin >> M[i][j];		
		
	for (int i = 0; i < l; i++){
	for (int j = 0; j < c; j++){
		
	while((i < l) and (pos < c)){
		if(M[pos][i]==1){
			if(pos==4){
				bingo = 1;
			}
			pos++;
		}
				else{
				pos = 0;
				i++;
				}
	
	}
	
	while((i < l) and (pos < c)){
		if(M[i][pos]==1){
			if(pos==4){
				bingo = 2;
			}
			i++;
		}
				else{
				pos = 0;
				i++;
				}
	
	}
	
	if(i == j){
	diagP = diagP * M[i][j];
	}
	if(diagP == 1){
	bingo = 3;
	}
	else{
	bingo = -1;
	}

	if(i + j == 4){
	diagS = diagS * M[i][j];
	}
	if((diagS == 1)){
	bingo = 4;
	}
	else{
	bingo = -1;
	}
	}
	}
			
	cout << bingo << endl;
   	
	return 0;
    
}







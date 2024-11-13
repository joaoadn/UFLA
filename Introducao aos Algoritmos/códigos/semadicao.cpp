#include <iostream>
using namespace std;
int antecessor(int n, int n2){
	
	if (n < 0){
    return n-1;
   }
   
   return antecessor(n,n2);
    
}

int sucessor(int n, int n2){

	if (n > 0){
	return n+1;
    }
    
    return sucessor(n,n2);
}

int main (){
	
	int X;
	int Y;
	
	cin >> X >> Y;
	
	if ((X > 0) and (Y > 0))
	sucessor(X,Y);
	
	if ((X < 0) and (Y < 0))
	antecessor(X,Y);
	
	if ((X > 0) and (Y < 0))
	sucessor(X,Y);
	
	if ((X < 0) and (Y > 0))
	sucessor(X,Y);
	
	
	return 0;

}

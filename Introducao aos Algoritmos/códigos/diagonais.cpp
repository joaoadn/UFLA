#include <iostream>
using namespace std;

int main(){
	
    int lados;
    int diagonais;
	
    cin >> lados;
    
    diagonais = (lados * (lados - 3)) / 2;
   
   if (lados >=3) {
    cout << diagonais << endl;
}
    
    return 0;
    
}

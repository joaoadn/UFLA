#include <iostream>
using namespace std;
int digitos(int n, int aux){

    if ((n == 0) and (aux == 0)){
    aux++;
    }
    
    else if(n != 0){
        aux++;
        
        return digitos( n/10, aux);
    }
      
    return aux;
}
        
int main (){
    
    int N;
    int aux = 0;
    
    cin >> N;
    
    cout << digitos(N, aux) << endl;
    
    return 0;       
}

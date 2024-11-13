#include <iostream>
using namespace std;
int M(int n);

int F(int n){
	
	if (n == 0){
    return 1;
    }
   
    if(n > 0){				
 
    return n -  M(F(n-1));
    }
    
    return F(n); 
}

int M(int n){
	
	if (n == 0){
    return 0;
    }
    
    if(n > 0){
	
    return n - F(M (n-1)); 
    }
    
    return M(n);    
}

int main (){
    
    int f1;
    int f2;
    int f3;
    int m1;
    int m2;
    int m3;
    
    
    cin >> f1 >> f2 >> f3 >> m1 >> m2 >> m3;
    
    cout << F(f1) << " " << F(f2) << " " << F(f3) << " " << M(m1) << " " << M(m2) << " " << M(m3);
    
    return 0;
    
}

  

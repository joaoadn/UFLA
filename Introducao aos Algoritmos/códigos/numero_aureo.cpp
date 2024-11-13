#include <iostream>
#include <fstream>
using namespace std;

double arquivar (double numero_aureo, fstream &salvar){
	salvar << numero_aureo << endl;
	return numero_aureo;
}

double calculo_aureo (int N, fstream &salvar){
  double numero_aureo;  
 
  if(N == 1){
    numero_aureo = 1;
  }
  else if(N > 1){
    numero_aureo = 1 + (1/(calculo_aureo(N - 1, salvar))); 
    
  }
  arquivar(numero_aureo,salvar);
  return numero_aureo;
}

double imprimir(int N, fstream &salvar){
	cout << calculo_aureo (N, salvar) << endl;
	return 0;
	}

int main(){
  
  int N; 

  cin >> N;
  
   fstream salvar("phi.txt", ios::out);
   imprimir(N,salvar);

  return 0;
}



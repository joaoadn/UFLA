#include <iostream>
using namespace std;

int main(){
	
	float matematica;
	float natureza;
	float linguagens;
	float redacao;
	float humanas;
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float nota5;
	float media;
	
	cin >> nota1;
	cin >> nota2;
	cin >> nota3;
	cin >> nota4;
	cin >> nota5;
	
	matematica = nota1 * 3;
	
	natureza = nota2 * 2;
	
	linguagens = nota3 * 2;
	
	redacao = nota4 * 2;
	
	humanas = nota5 * 1;
	
	media = (matematica + natureza + linguagens + redacao + humanas) / 10;
	
	if (nota4 < 200){
		media = -1;
	}
		
    else if(nota4 > 200){
		media = (matematica + natureza + linguagens + redacao + humanas) / 10;
		
	}
	
	cout << media << endl;
	
	return 0;
}
	
	
	
	
	
	
	
	

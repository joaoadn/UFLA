#include <iostream>
using namespace std;

struct memes{
  int num_meme; 
  string nome_arquivo; 
  string assunto_arquivo;
  string site;
};

void ler (memes v[], int sz){
	int i = 0; 
  for(i = 0; i < sz; i++){
    cin >> v[i].num_meme >> v[i].nome_arquivo >> v[i].assunto_arquivo >> v[i].site;
  }
}

void ordenar (memes v[], int sz, int aux_num, string aux_nome, string aux_assunto, string aux_site){
  int menorValor;
  int i = 0;
  int x = 0;

  while(i < sz - 1){
	  menorValor = i;
    for(x = i+1; x < sz; x++){
      if (v[x].num_meme < v[menorValor].num_meme){
        menorValor = x;
      }
    }
	
	if(aux_num >= 0){
	
    aux_num = v[i].num_meme;
    v[i].num_meme = v[menorValor].num_meme;
    aux_nome = v[i].nome_arquivo;
    v[i].nome_arquivo = v[menorValor].nome_arquivo;
	aux_assunto = v[i].assunto_arquivo;
    v[i].assunto_arquivo = v[menorValor].assunto_arquivo;
    aux_site = v[i].site;
    v[i].site = v[menorValor].site;
	 
	v[menorValor].num_meme = aux_num;
	v[menorValor].nome_arquivo = aux_nome;
	v[menorValor].assunto_arquivo = aux_assunto;
	v[menorValor].site = aux_site;
	
	i++;
	}
}
}
void imprimir (memes v[], int tam, string &site){ 
  int aux = 0;
  int i = 0;

  while(i < tam){
    if (v[i].site == site){
		if((aux =! 0)){
      cout << v[i].num_meme << " " << v[i].nome_arquivo << " " << v[i].assunto_arquivo << " " << v[i].site << endl;
      aux++;
    }
  }
  i++;
}
	if(aux == 0){
		cout << "Inexistente" << endl;	
	}
}
int main (){
  int tam;
  string site;
  int aux_num = 0;
  string aux_nome;
  string aux_assunto; 
  string aux_site;

  cin >> tam; 

  memes v[tam]; 

  ler (v, tam); 

  ordenar (v, tam, aux_num, aux_nome, aux_assunto, aux_site);  

  cin >> site;

  imprimir (v, tam, site); 

  return 0;
}








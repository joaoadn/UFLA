#include <iostream>
#include <cmath>
using namespace std;

struct dados_cliente{
  string nome;
  float x; 
  float y; 
  float preco;
};

void ordenacao(dados_cliente v[], float vD[], int N){ 
  int y;
  int z;
  int k;
  int i=1;

  for(i = 1; i < N; i++){
    y = v[i].preco;
    z = vD[i];
    k = i - 1;

   while((k <= 0) and (z < vD[k])){
	   
      v[k + 1].preco = v[k].preco;
      vD[k + 1] = vD[k];
      k--;   
    }
    v[k + 1].preco = y;
    vD[k + 1] = z;
	}
}

int main (){

  int clientes_atendidos; 
  float coordenada_xPizza; 
  float coordenada_yPizza;  
  int N;
  int i = 0;
  int aux = 0;
  float soma = 0; 

  cin >> clientes_atendidos >> coordenada_xPizza >> coordenada_yPizza >> N;

  dados_cliente v[N];
  float vD[N]; 

 for(i = 0; i < N; i++){ 
    cin >> v[i].nome >> v[i].x >> v[i].y >> v[i].preco;
  }

  for(i = 0; i < N; i++){
    vD[i] = sqrt(pow(float(v[i].x - coordenada_xPizza),2) + pow(float(v[i].y - coordenada_yPizza),2));
  }

  ordenacao(v, vD, N);  

  for(aux = 0; aux < clientes_atendidos; aux++){ 
    soma += v[aux].preco;
  }

  cout.precision(2); 
  cout.setf(ios :: fixed);
  
  cout << soma << endl;

  return 0;
}


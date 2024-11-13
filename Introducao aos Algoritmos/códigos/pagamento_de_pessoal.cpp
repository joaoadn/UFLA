#include <iostream>
using namespace std;

struct funcionarios{
  int id;
  float h; 
  float valorH; 
  float salario;
};

void salario_a_receber (funcionarios v[],int N){
	int i = 0; 

  for(i = 0; i < N; i++){
    cin >> v[i].id;
    cin >> v[i].h;
    cin >> v[i].valorH;
    v[i].salario = v[i].valorH * v[i].h;
    } 
}

void ordenacao (funcionarios v[], int N){ 
  float x; 
  float y;
  int i = 0;
  int aux = 0;

	  for(i = 0; i < N - 1; i++){
		  if (aux >= 0){
		 while(aux < N - 1 - i){
			if (v[aux].salario > v[aux+1].salario){
				x = v[aux].salario;
				v[aux].salario = v[aux+1].salario;
				v[aux+1].salario = x;

				y = v[aux].id;
				v[aux].id = v[aux+1].id;
				v[aux+1].id = y;
			
			aux++;
			}
			}
		}
		}
			
  for(i = 0; i < N; i++){
    cout << v[i].id << " " << v[i].salario << endl; 
	}
	}

int main(){

  int N;
  cin >> N;  
  funcionarios v[N];
  salario_a_receber(v,N); 
  ordenacao(v,N);
  return 0;
}

#include <iostream>
using namespace std;
struct alimento{
	string n;
	int qtd;
};

struct prof{
    string nprofessor;
    string alm1;
    int qtd1;
    string alm2;
    int qtd2;
};

void sAlms(alimento vAlms[], int& tamvAlms, string alimento, int qtd){
	int i = 0;
	
	while((i < tamvAlms) and (vAlms[i].n != alimento)){
	i++;
	}
			
	if(i < tamvAlms){
		vAlms[i].qtd += qtd;
	}
	else{
		vAlms[i].n = alimento;
		vAlms[i].qtd = qtd;
		tamvAlms++;
	}
}
	
int main(){
	int N;
	cin >> N;
	int i;
	int qtdAlms = 0;
	alimento vAlms[2*N];
	prof vPs[N];
	
	for(i = 0; i < N; i++){
		cin >> vPs[i].nprofessor;
		cin >> vPs[i].alm1;
		cin >> vPs[i].qtd1;
		cin >> vPs[i].alm2;
		cin >> vPs[i].qtd2;
		sAlms(vAlms,qtdAlms,vPs[i].alm1,vPs[i].qtd1);
		sAlms(vAlms,qtdAlms,vPs[i].alm2,vPs[i].qtd2);	
	 }

	
	for(i = 0; i < qtdAlms; i++){
		cout << vAlms[i].n << " " << vAlms[i].qtd << endl;
	}
	
    return 0;
}




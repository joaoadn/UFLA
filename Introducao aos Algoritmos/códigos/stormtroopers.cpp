#include <iostream>
using namespace std;
struct stormtrooper{
	string nSerie;
	string planetaO;
	int bat;
};

struct planeta{
	string nSerie;
	string planetaO;
	int bat;
	int storms; 
};

int main(){
	int qtdS;
	int i = 0;
	int pD = 1; 
	int x = 0;
	int n = 1;
	float media;
	
	cin >> qtdS;

	stormtrooper v[qtdS];
	
	while(i < qtdS){ 
		cin >> v[i].nSerie >> v[i].planetaO >> v[i].bat;
		i++;
		}
		
	planeta vPlaneta[i];		

	vPlaneta[0].planetaO = v[0].planetaO;
	vPlaneta[0].storms = 1;
	vPlaneta[0].bat = v[0].bat;
	
	for(n = 1; n < i; n++){ 
		x = 0;
		
		if(v[n].planetaO != vPlaneta[x].planetaO){
			while(x < pD){
				x++;
			}
		}		
		if (x >= pD){
			vPlaneta[x].planetaO = v[n].planetaO; 
			vPlaneta[x].bat = v[n].bat;
			vPlaneta[x].storms = 1;
			pD++;
		}
		else if (x <= pD){
			vPlaneta[x].bat += v[n].bat; 
			vPlaneta[x].storms++;
		}
	}	
	for(x = 0; x < pD; x++){
		media = float (vPlaneta[x].bat) / float (vPlaneta[x].storms);
		
	cout << vPlaneta[x].planetaO << " " << vPlaneta[x].storms << " " << media << endl; 	
	}
	return 0;
}


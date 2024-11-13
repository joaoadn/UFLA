#include <iostream>
using namespace std;

int main (){
    int picanha;
    int alcatra;
    int linguica;
    int espetinho;
    int sal;
    int farinha;
    int carvao;
    float precoP;
    float precoA;
    float precoL;
    float precoE;
    float precoS;
    float precoF;
    float precoC;
    float total;
    
    cin >> picanha;
    cin >> alcatra;
    cin >> linguica;
    cin >> espetinho;
    cin >> sal;
    cin >> farinha;
    cin >> carvao;
    
    precoP = (picanha * 28.90);
    precoA = (alcatra * 19.90);
    precoL = (linguica * 7.95);
    precoE = (espetinho * 2.99);
    precoS = (sal * 1.50);
    precoF = (farinha * 1.85);
    precoC = (carvao * 8.70);
    total = precoP + precoA + precoL + precoE + precoS + precoF + precoC;
    
    cout << total << endl;
    
    if(total <= 200){
		cout << (5 * total / 100) << endl;
		cout << total - (5 * total/100) << endl;
	}
	
	else if (total > 200){
		cout << (10 * total/100) << endl;
		cout << total - (10 * total/100) << endl;
	}
  
    return 0;
    
}
     
    

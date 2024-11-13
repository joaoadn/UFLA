#include <iostream>
using namespace std;

int main(){

    char sexo;
	float H;
	
	cin >> sexo;
	cin >> H;
	
	if ((sexo == (char)'M')){
    cout << (72.7 * H) - 58 << endl;
}
	
	else if ((sexo == (char)'F')){
	cout <<	(62.1 * H) - 44.7 << endl;
	}
	
	return 0;
}




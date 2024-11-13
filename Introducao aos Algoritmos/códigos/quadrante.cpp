#include <iostream>
using namespace std;

int main (){
	int x;
	int y;
	
	cin >> x;
	cin >> y;
	
	if(x >= 0 and y >= 0){
	cout << x / y << endl;
}

    if (x <= 0 and y >= 0){
	cout << x * y << endl;
}

    if (x <= 0 and y <= 0){
	cout << x + y << endl;
}

    if (x >= 0 and y <= 0){
	cout << pow(x, y) << endl;
}

    return 0;
    
}
	


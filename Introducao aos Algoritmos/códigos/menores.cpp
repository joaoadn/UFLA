#include <iostream>
using namespace std;

int main (){
	float n1;
	float n2;
	float n3;
	float n4;
	
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	
	if ((n1 < n3) and ( n1 < n4) and (n1 < n2) and (n2 < n3) and (n2 < n4)){
		cout << n1 << endl;
		cout << n2 << endl;
	}

	else if ((n1 < n2) and (n1 < n3) and (n1 < n4) and (n3 < n2) and (n3 < n4)){
	    cout << n1 << endl;
	    cout << n3 << endl;
	}
	
	else if ((n1 < n2) and (n1 < n3) and (n1 < n4) and (n4 < n3) and (n4 < n2)){
		cout << n1 << endl;
		cout << n4 << endl;
	}
	
	else if ((n2 < n3) and (n2 < n1) and (n2 < n4) and (n1 < n3) and (n1 < n4)){
		cout << n2 << endl;
		cout << n1 << endl;
	}
	
	else if ((n3 > n2) and (n3 < n4) and (n3 < n1)){
		cout << n2 << endl;
		cout << n3 << endl;
	}
	
	else if ((n2 < n3) and (n2 < n1) and (n2 < n4) and (n4 < n3)){
		cout << n2 << endl;
		cout << n4 << endl;
	}
	
	else if ((n3 < n2) and (n3 < n1) and (n3 < n4) and (n1 < n4) and (n1 < n2)){
		cout << n3 << endl;
		cout << n1 << endl;
	}
	
	else if ((n3 < n2) and (n3 < n4) and (n3 < n1) and (n2 < n4) and (n2 < n1)){
		cout << n3 << endl;
		cout << n2 << endl;
	}
	
	else if ((n3 < n2) and (n3 < n1) and (n3 < n4) and (n4 < n2) and (n4 < n1)){
		cout << n3 << endl;
		cout << n4 << endl;
	}
	
	else if ((n4 < n3) and (n4 < n2) and (n4 < n1) and (n1 < n2) and (n1 < n3)){
		cout << n4 << endl;
		cout << n1 << endl;
	}
	
	else if ((n4 < n3) and (n4 < n2) and (n4 < n1) and (n2 < n1) and (n2 < n3)){
		cout << n4 << endl;
		cout << n2 << endl;
	}
	
	else if ((n4 < n3) and (n4 < n2) and (n4 < n1) and (n3 < n1) and (n3 < n2)){
		cout << n4 << endl;
		cout << n3 << endl;
		
	}

	return 0;	
}


	
	

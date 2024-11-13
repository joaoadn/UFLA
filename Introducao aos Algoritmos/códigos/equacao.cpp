#include <iostream>
using namespace std;
int main ()
{
	float x1;
	float y1;
	float x2;
	float y2;
	float m;
	float q;
	
	cin >> x1;
	
	cin >> y1;
	
	cin >> x2;
	
	cin >> y2;
	
	m = (y2 - y1) / (x2 - x1);
	
	q = (y1 - m * x1);
	
	cout << m << endl;
	
	cout << q << endl;
	
	return 0;
}



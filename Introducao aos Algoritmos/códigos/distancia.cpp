#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float x1;
	float y1;
	float x2;
	float y2;
	
	cin >> x1;
	
	cin >> y1;
	
	cin >> x2;
	
	cin >> y2;
	
	cout << sqrt(powf(x2 - x1, 2)+ powf(y2 - y1, 2)) << endl;
	
	return 0;
}

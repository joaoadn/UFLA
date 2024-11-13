#include <iostream>
using namespace std;
int main ()
{
	int h;
    int m;
    float s;
    int milisegundos;
    int s1; 
    
    cin >> milisegundos;
    
    s1 = milisegundos / 1000;
    h = s1 / 3600;
	m = (s1 - h) / 3600 / 60;
	s = (h - m) / 1000;  
 
	cout << h << " : " << m << " : " << s << endl;
	
	
	return 0;
	
}

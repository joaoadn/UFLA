#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float homens;
    
    float caravelas;
    
    cin >> homens;
    
    caravelas = ((homens - 1000) / 80);
    
    if (homens >= 1000) 
    
    cout << ceil(caravelas) << endl;
    
    return 0;
}








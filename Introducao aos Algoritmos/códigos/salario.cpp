#include <iostream>
using namespace std;
int main ()
{
    float salario;
    
    int horas;
    
    cin >> salario;
    
    cin >> horas;
    
    cout << (5 * salario/100) * horas - ( 5 *  salario/100) * horas * 23 / 100 << endl;
    
    return 0;
}


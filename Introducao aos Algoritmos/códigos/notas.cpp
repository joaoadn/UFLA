#include <iostream>
using namespace std;
int main()
{
	int moeda;
	int totalcem;
	int totalcinquenta;
	int totalvinte;
	int totaldez;
	int totalcinco;
	int totaldois;
	int totalum;
	
	
	cin >> moeda;
	
	totalcem = moeda / 100;
	
	totalcinquenta =  (moeda / 100);
	
	totalvinte = (moeda % 100 / 50) / 20;
	
	totaldez = totalcem / 50 / 20 / 10;
	
	totalcinco = totalcem / 50 / 20 / 10 / 5;
	
	totaldois = totalcem / 50 / 20 / 10 / 5 / 2;
	
	totalum = totalcem / 50 / 20 / 10 / 5 / 2 / 1;

	cout << totalcem << endl;
	cout << totalcinquenta << endl;
	cout << totalvinte << endl;
	cout << totaldez << endl;
	cout << totalcinco << endl;
	cout << totaldois << endl;
	cout << totalum << endl;
	
	
	}





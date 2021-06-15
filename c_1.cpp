#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int integl;
	float floatg;
	long longg;
	double doubleg;
	
	cout<<"Ââåäèòå öåëîâå ÷èñëî: ";
	cin>>integl;
	
	cout<<"Ââåäèòå ÷èñëî ñ ïëàâàþùåé òî÷êîé: ";
	cin>>floatg;      
	
	cout<<"Ââåäèòå öåëîå ÷èñëî â äèàïàçîíå -2êê äî +2êê: ";
	cin>>longg;
	
	cout<<"Ââåäèòå âåùåñòâåííîå ÷èñëî ñ ïëàâàþùåé òî÷êîé, ïîâûøåííîé òî÷íîñòè: ";
	cin>>doubleg;
	
	return 0;
}
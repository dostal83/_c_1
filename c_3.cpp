#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int sum, deduc, multipl;
	float mean, a, b;
	
	cout<<"ââåäèòå 2 ÷èñëà: ";
	cin>>a>>b;
	
	cout<<" sum: "<<a+b<<"\n deduc: "<<a-b<<"\n multipl: "<<a*b<<"\n mean: "<<(a+b)/2; 
	
	return 0;
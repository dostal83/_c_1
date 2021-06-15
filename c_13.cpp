#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, d;
	
	cout<<"Ââåäèòå ïåðâîå ÷èñëî: ";
	cin>>a;
	
	cout<<"Ââåäèòå âòîðîå ÷èñëî: ";
	cin>>b;
	
		c=a;
		d=b;
		a=d;
		b=c;
	
	cout<<"×èñëî a: "<<a<< "\n÷èñëî b: "<<b;
	
	return 0;
}
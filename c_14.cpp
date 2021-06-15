#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b;
	
	cout<<"Ââåäèòå ïåðâîå ÷èñëî: ";
	cin>>a;
	
	cout<<"Ââåäèòå âòîðîå ÷èñëî: ";
	cin>>b;
	
		a=a+b;
		b=a-b;
		a=a-b;
	
	cout<<"×èñëî a: "<<a<< "\n÷èñëî b: "<<b;
	
	return 0;
}
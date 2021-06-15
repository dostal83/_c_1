#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0,"");
	float a, b;
	
	cout<<"Ââåäèòå êàòåòû òðåóãîëüíèêà: ";
	cin>>a>>b;
	cout<<"Ãèïîòåíóçà: "<< sqrt(pow(a, 2) + pow(b, 2));
	
	return 0;
}
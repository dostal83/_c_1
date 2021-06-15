  
#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int n, k, a, b;
	
	cin>>n>>k;
	a = k /n;//êàæäîìó øêîëüíèêó à ÿáëîê
	b = k - (a * n);//îñòàëîñü ÿáëîê â êîðçèíå
	cout<<a<<"\n"<<b;
	
	return 0;
}
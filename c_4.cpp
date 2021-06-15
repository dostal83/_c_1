#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int n, m;
	
	cout<<"Ââåäèòå êîë-âî 1)êëåòîê, 2)çàéöåâ:";
	cin>>n>>m;
	
	cout<<"Â êëåòêå ìàêñèìóì áóäåò "<<(m+n-1)/n<<" çàéöåâ";
	return 0;
}
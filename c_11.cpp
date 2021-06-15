#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    float a, b, c, x;
    setlocale(0,"");
    
    cout<< "Ââĺäčňĺ a, b č ń: ";
    cin>>a>>b>>c;

    if((pow(b,2)-4*a*c)>=0)
    {
        x=(-1*b+sqrt(pow(b,2) - 4*a*c))/(2*a);
        cout << "Ďĺđâűé ęîđĺíü đŕâĺí " << x<<"\n";
        x=(-1*b-sqrt(pow(b,2) - 4*a*c))/(2*a);
        cout<<"Âňîđîé ęîđĺíü đŕâĺí "<<x;
    }
    
    else
    {
        cout<<"Äčńęđčěčíŕíň ěĺíüřĺ 0";
    }
 
    return 0;
}
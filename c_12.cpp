#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
 
	int cups = 6;
	int spoons = cups; // êîëè÷åñòâî ëîæåê ðàâíî êîë-òâó ÷àøåê
	int saucers = cups; // áëþäöà 
	int amount = cups + spoons + saucers; // îáùåå êîëè÷åñòâî
 
	cout<<"Âñåãî "<<amount;
 
	return 0;
}
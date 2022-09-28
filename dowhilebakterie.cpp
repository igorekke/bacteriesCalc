#include <iostream>
using namespace std;
int main()
{
	int populacja=1, godzin=0;
	do
	{
		godzin++;
		populacja = populacja *2;
		cout << "Minelo godzin:" << godzin << endl;
		cout << "Liczba bakterii:" << populacja << endl;
	} while(populacja<=1000000000);
}

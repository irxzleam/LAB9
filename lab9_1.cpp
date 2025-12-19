#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
	double ini, dok, pay;
	cout << "Enter initial loan: ";
	cin >> ini;
	cout << "Enter interest rate per year (%): ";
	cin >> dok;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	// use 'setw' to set width of table and 'left' to set left-alignment
	// you can change input argument of 'setw()' to see the effect
	// Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	// use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	// you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	int i = 1;
	while (ini != 0)
	{
		cout << setw(13) << left << i;
		cout << setw(13) << left << ini;
		cout << setw(13) << left << ini * (dok / 100);
		cout << setw(13) << left << ini * ((dok / 100) + 1);
		ini = ini * ((dok / 100) + 1);
		if (ini < pay)
		{
			pay = ini;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << ini - pay;
			break;
		}
		cout << setw(13) << left << pay;
		cout << setw(13) << left << ini - pay;
		ini -= pay;

		cout << "\n";
		i++;
	}
	return 0;
}

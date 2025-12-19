#include <iostream>

using namespace std;

// Write the function printO() here
void printO(int y, int x)
{
	if (y <= 0 || x <= 0)
	{
		cout << "Invalid input";
	}
	else
	{
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				cout << 'O';
			}
			cout << "\n";
		}
	}
}

int main()
{

	printO(2, 2);
	cout << "\n";

	printO(3, 5);
	cout << "\n";

	printO(5, 3);
	cout << "\n";

	printO(0, 3);
	cout << "\n";

	printO(7, -1);
	cout << "\n";

	return 0;
}

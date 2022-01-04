#include <iostream>

using namespace std;

int main()
{
	int response;
	double temper;

	cout << "Press 1 to convert from Fahrenheit to Celsius,"
		<< " 2 for reverse translation: ";

	cin >> response;

	if (response == 1)
	{
		cout << "Enter the temperature (in Fahrenheit): ";
		cin >> temper;
		cout << "In degrees Celsius it is: " << 5.0 / 9.0 * (temper - 32.0) << endl;
	}
	else
	{
		cout << "Enter the temperature in gr. Celsius: ";
		cin >> temper;
		cout << "In Fahrenheit it is: " << 9.0 / 5.0 * temper + 32.0 << endl;
	}

	system("pause");
	return 0;
}

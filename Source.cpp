#include <iostream>

using namespace std;

int main()
{
	int degFahrenheit;

	cout << "Please enter the temperature in degrees Fahrenheit: ";

	cin >> degFahrenheit;

	double degCelsius = (degFahrenheit - 32) * 0.5556;

	cout << "This number in degrees Celsius: " << degCelsius << endl <<endl;
	
	system("pause");

	return 0;
}
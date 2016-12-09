#include <iostream>
#include<cctype>
#include<conio.h>

using namespace std;

int main()

{

	float temp, tempCon;
	char unit;

	cout << "Please enter the temperature : ";
	cin >> temp;
	cout <<"Please enter the unit (in f or c) : ";
	cin >> unit;

	if ( isupper(unit) )
	{
		unit = tolower(unit);
	}

	if (unit == 'f')
	{
		temp = (temp - 32)  / 9.0 * 5.0;
		cout << temp << " degrees Celsius\n";
	}
	else if (unit == 'c')
	{
		temp = 9.0 / 5.0 * temp + 32;
		cout << temp << " degrees Fahrenheit\n";
	}
	else
	{
		cout <<"Sorry, Please enter a valid unit \n";
	}
    if (cin.get() == '\n'){}
    return 0;
}
}

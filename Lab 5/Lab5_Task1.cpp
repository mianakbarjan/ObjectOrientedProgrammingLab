#include <iostream>
using namespace std;
class Heater 
{
private:
	int temp;

public:
	Heater()
	{
		temp = 15;
	}
	int warmer()
	{
		temp = temp + 5;
		return temp;
	}
	int cooler()
	{
		temp = temp - 5;
		return temp;
	}
	~Heater()
	{
	}
};

int main()
{
	Heater h;// class instance
	cout << "Default temperature is 15." << endl;
	while (true)
	{
		cout << "--------- MENU ---------" << endl;
		cout << "1. Cooler" << endl;
		cout << "2. Warmer" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter any option: \n";
		int option;
		cin >> option;
		static int x = 0;
		
		switch (option)
		{
		case 1:
		{
			cout << "Cooler: ";
			x = h.cooler();
			cout << "New temperature is: " <<x << endl;
			break;
		}
		case 2:
		{
			cout << "Warmer: ";
			x = h.warmer();
			cout << "New emperature is: " << x << endl;
			break;

		}
		case 0:
		{
			exit(0);
		}
		default:
		{
			cout << "Enter valid option: " << endl;
			break;
		}
		}
	}


	return 0;
}

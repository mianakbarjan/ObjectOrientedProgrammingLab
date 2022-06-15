#include <iostream>
using namespace std;
class Vehicle
{
protected:
	int no_of_tires;
	string size;
	int no_of_seats;
public:
	Vehicle() //can also be set using cin in the constructor (check task 3)
	{
		no_of_tires = 2;
		size = 'ltv';
		no_of_seats = 1;
	}
	virtual void setValue() //can also be set individually
	{
		cout << "Enter number of tires: ";
		cin >> no_of_tires;
		cout << "Enter size of vehicle (ltv or htv): ";
		cin >> size;
		cout << "Enter number of seats: ";
		cin >> no_of_seats;
	}
	virtual void printValue()
	{
		cout << "Number of tires are: " << no_of_tires << endl;
		cout << "Size of vehicle is: " << size << endl;
		cout << "Number of seats of vehicle are: " << no_of_seats << endl;
	}
	int getTires()
	{
		return no_of_tires;
	}
	string getSize()
	{
		return size;
	}
	int getSeats()
	{
		return no_of_seats;
	}
};
class Car : public Vehicle
{
protected:
	string color;
public:
	Car()
	{
		color = 'w';
	}
	void setValue()
	{
		cout << "Enter number of tires: ";
		cin >> no_of_tires;
		cout << "Enter size of vehicle (ltv or htv): ";
		cin >> size;
		cout << "Enter number of seats: ";
		cin >> no_of_seats;
		cout << "Enter colour of Car: ";
		cin >> color;
	}
	void printValue()
	{
		cout << "Number of tires are: " << no_of_tires << endl;
		cout << "Size of Car is: " << size << endl;
		cout << "Number of seats of Car are: " << no_of_seats << endl;
		cout << "Colour of Car is: " << color << endl;
	}
	string getColor()
	{
		return color;
	}
};

class Vitz : public Car
{
protected:
	int model;
	string plate_number;
public:
	Vitz()
	{
		model = 2002;
		plate_number = '0';
	}
	void setValue()
	{
		cout << "Enter number of tires: ";
		cin >> no_of_tires;
		cout << "Enter size of vehicle (ltv or htv): ";
		cin >> size;
		cout << "Enter number of seats: ";
		cin >> no_of_seats;
		cout << "Enter colour of Vitz: ";
		cin >> color;
		cout << "Enter model number of Vitz: ";
		cin >> model;
		cout << "Enter plate number of Vitz: ";
		cin >> plate_number;
	}
	int getModel()
	{
		return model;
	}
	string getPlate()
	{
		return plate_number;
	}
	void printValue()
	{
		cout << "Number of tires are: " << no_of_tires << endl;
		cout << "Size of Car is: " << size << endl;
		cout << "Number of seats of Car are: " << no_of_seats << endl;
		cout << "Colour of Car is: " << color << endl;
		cout << "Model number of Vitz is: " << model << endl;
		cout << "Plate number of Vitz is: " << plate_number << endl;
	}

};
void menu()
{
	cout << "1. Size of Vitz" << endl;
	cout << "2. Colour of Vitz" << endl;
	cout << "3. Number of tires" << endl;
	cout << "4. Number of seats" << endl;
	cout << "5. Model Number" << endl;
	cout << "6. Plate Number" << endl;
	cout << "Enter option: ";
}
int main()
{

	Vehicle* A;
	Vitz C;
	A = &C;
	int x = 0;
	A->setValue();
	do
	{
		menu();
		cin >> x;
		if (x == 1)
		{
			string n = A->getSize();
			cout << n << endl;
		}
		else if (x == 2)
		{
			string n = C.getColor();
			cout << n << endl;
		}
		else if (x == 3)
		{
			int n = A->getTires();
			cout << n << endl;
		}
		else if (x == 4)
		{
			int n = A->getSeats();
			cout << n << endl;
		}
		else if (x == 5)
		{
			int n = C.getModel();
			cout << n << endl;
		}
		else if (x == 6)
		{
			string n = C.getPlate();
			cout << n << endl;
		}
		else if (x == 0)
		{
			break;
		}
		else
		{
			cout << "Enter valid option: ";
		}
	} while (x != 0);
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string NameId;
	static int PersonCount;
public:
	Person()
	{
		NameId = '0';
		PersonCount++;
	}
	~Person(){}
	friend ostream& operator << (ostream&, Person&);
	friend istream& operator >> (istream&, Person&);
};
class Date
{
private:
	int year, month, date;

public:
	Date()
	{
		year = 0;
		month = 0;
		date = 0;
	}
	friend class Person;
	Person P;
	friend ostream& operator << (ostream&, Date&);
	friend istream& operator >> (istream&, Date&);
	int operator >(Date &d)
	{
		if (d.year > year)
		{
			return 0;
		}
		else if (d.year < year)
		{
			return 1;
		}
		else if (d.year == year)
		{
			if (d.month > month)
			{
				return 0;
			}
			else if (d.month < month)
			{
				return 1;
			}
			else if (d.month == month)
			{
				if (d.date > date)
				{
					return 0;
				}
				else if (d.date < date)
				{
					return 1;
				}
				else
				{
					return -1;
				}
			}
		}
		
	}
};
ostream& operator << (ostream& output, Person& P)
{
	for (int i = 0; P.NameId[i] != '\0'; i++)
	{
		output << P.NameId[i];
	}
	return output;
}
istream& operator >> (istream& input, Person& P)
{
	cout << "Person No." << P.PersonCount << " Data" << endl;
	cout << "Enter Name and ID: ";
	getline(input, P.NameId);
	return input;
}
ostream& operator << (ostream& output, Date& D)
{
	output << D.year << "-" << D.month << "-" << D.date;
	return output;
}
istream& operator >> (istream& input, Date& D)
{
	input >> D.P;
	cout << "Enter joining date (yyyy mm dd): ";
	input >> D.year;
	input >> D.month;
	input >> D.date;
	cin.ignore();
	return input;
}
int Person::PersonCount = 0;

int main()
{
	Date D1;
	cin >> D1;
	Date D2;
	cin >> D2;
	int x = D1 > D2;
	if (x == 1)
	{
		cout << D2.P << " is senior to " << D1.P << " because " << D2 << " is earlier than " << D1;
	}
	else if (x == 0)
	{
		cout << D1.P << " is senior to " << D2.P << " because " << D1 << " is earlier than " << D2;
	}
	else if (x == -1)
	{
		cout << D1.P << " is in the same year as " << D2.P;
	}
	return 0;
}
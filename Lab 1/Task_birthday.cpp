#include <iostream>
#include <string>
using namespace std;
struct birthday {
	int day;
	char month[3];
	int year;
};
struct user {
	string name;
	int age;
	string city;
	birthday birth;
};
int main()
{

	user s[3];
	for (int i = 0; i < 3; i++)
	{

		cout << "Enter record of User " << i + 1 << ": " << endl;
		cout << "Enter the name: ";
		cin >> s[i].name;
		cout << "Enter the age. : ";
		cin >> s[i].age;
		cout << "Enter the city: ";
		cin >> s[i].city;
		cout << "Enter the D.O.B: " << endl;
		cout << "Enter day: ";
		cin >> s[i].birth.day;
		cout << "Enter month: ";
		cin >> s[i].birth.month;
		cout << "Enter year: ";
		cin >> s[i].birth.year;
	}
	cout << "Enter a D.O.B to check: ";
	int n;
	cout << "Enter Date: ";
	cin >> n;
	cout << "Enter month: ";
	char c[3];
	cin >> c;
	cout << "Enter year: ";
	int y;
	cin >> y;
	for (int i = 0; i < 3; i++)
	{
		if (s[i].birth.day == n && s[i].birth.month == c && s[i].birth.year == y)
		{
			cout << "It is " << s[i].name << "'s Birthday. Bappy Birthday, " << s[i].name;
			break;
		}
	}
	
	return 0;
}

		
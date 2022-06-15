#include <iostream>
#include <string>
using namespace std;
class Officer
{
private:
	string Name;
	int Id;
	string Rank;
	static int OfficerCount;
public:
	Officer()
	{
		OfficerCount++; //counts number of instances
	}
	void Setter(string name, int id, string rank)
	{
		Name = name;
		Id = id;
		Rank = rank;
	}
	void Check()
	{
		int Palindrome=0, P;
		int ID = Id; //stores original Id so that we can manipulate Id ahead
		do
		{
			P = Id % 10; //stores last digit of Id in palindrome
			Palindrome = (Palindrome * 10) + P; //adds P to the Palindrome as the first digit, in the next iteration, the Palindrome will increase by a multiple of 10
			Id /= 10; //removes the last digit of the Id to decrease its size so that it can be stored in reverse order in the Palindrome
		} while (Id != 0);
		if (Palindrome==ID) //checks Palindrome with original Id
		{
			cout << "The officer is not allowed to enter the restricted area." << endl;
			OfficerCount--; //Decreases officercount of those who did not enter
		}
		else
		{
			cout << "The officer is allowed to enter the restricted area." << endl;
		}
	}
	static void Print()
	{
		cout << OfficerCount-1 << endl;
	}
};
int Officer::OfficerCount = 0;
int main()
{

	while (true)
	{
		Officer o1;
		cout << "--------- MENU ---------" << endl;
		cout << "1. Enter id of officer" << endl;
		cout << "2. Get total number of officers" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter any option: \n";
		int option;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			cout << "Enter id of officer:" << endl;
			int id;
			cin >> id;
			string name;
			cout << "Enter name of officer:" << endl;
			cin >> name;
			cout << "Enter rank of officer:" << endl;
			string rank;
			cin >> rank;
			o1.Setter(name, id, rank);
			o1.Check();
			break;
		}
		case 2:
		{
			cout << "Total number of officers: ";
			o1.Print();
			break;
		}
		case 0:
		{
			return;
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
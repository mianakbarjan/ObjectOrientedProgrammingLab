#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string Student;
public:

	void Setter()
	{
		string s1;
		getline(cin, s1);
		Student = s1;
	}
	friend class Coordinator;
};
class Coordinator {
public:
	Person p1; 
	Person p2;
	void Setter()
	{
		cout << "Enter Competition name 'space' University name of Person 1: ";
		p1.Setter();
		cout << "Enter Competition name 'space' University name of Person 2: ";
		p2.Setter();
	}
	int letter1 = 0, letter2 = 0, comp1 = 0, comp2 = 0;
	void Check()
	{
		for (letter1; p1.Student[letter1] != ' '; letter1++) // letter1 counter goes till before space
		{
			comp1++; //counts letters of competition to give room number
		}
		for (letter2; p2.Student[letter2] != ' '; letter2++) // letter2 counter goes till before space
		{
			comp2++; //counts letters of competition to give room number
		}
		int count = 0;
		letter1 += 1;
		letter2 += 1;
		while (p1.Student[letter1] != '\0' && p2.Student[letter2] != '\0') 
		{
			if (p1.Student[letter1] != p2.Student[letter2]) //checks if universities are the same
			{
				count++; 
			}
			letter1++;
			letter2++;
		}
		if (count == 0) //assigns room number
		{
			if (comp1 > comp2)
			{
				cout << "Message from the coordinator. Person 1 and Person 2 are roommates, and the room number is " << comp1;

			}
			else
			{
				cout << "Message from the coordinator. Person 1 and Person 2 are roommates, and the room number is " << comp2;
			}
		}
		else {
			cout << "Message from the coordinator. Person 1 and Person 2 are not roommates.";
		}
			
	}
};



int main()
{
	Coordinator c1;
	c1.Setter();
	c1.Check();
	return 0;
}
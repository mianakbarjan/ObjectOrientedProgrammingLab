#include <iostream>
#include <string>
using namespace std;
struct student {
	string name;
	string regno;
	string degree;
	float sgpa;
};
int main()
{
	student s[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter record of Student " << i+1 << ": " << endl;
		int n;
		float sum = 0;
		cout << "Enter the name: ";
		cin >> s[i].name;
		cout << "Enter the reg. no. : ";
		cin >> s[i].regno;
		cout << "Enter the degree program: ";
		cin >> s[i].degree;
		cout << "Enter the number of courses: ";
		cin >> n;
		for (int j = 1; j <= n; j++)
		{
			float gpa = 0;
			float mark;
			cout << "Enter the marks of course " << j << ": ";
			cin >> mark;
			if (mark > 86)
			{
				gpa = 4;
			}
			else if (mark >= 82 && mark <86)
			{
				gpa = 3.67;
			}
			else if (mark >= 78 && mark < 82)
			{
				gpa = 3.33;
			}
			else if (mark >= 74 && mark < 78)
			{
				gpa = 3;
			}
			else if (mark >= 70 && mark < 74)
			{
				gpa = 2.67;
			}
			else if (mark >= 66 && mark < 70)
			{
				gpa = 2.33;
			}
			sum += gpa;
			
		}
		float sgpa;
		sgpa = (sum * 3) / (n * 3);
			s[i].sgpa = sgpa;
	}
	cout << "S.No." << "\t" << "Name" << "\t" << "Reg.No." << "\t" << "Degree Program" << "\t" << "SGPA" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1;
		cout << "\t" << s[i].name << "\t" << s[i].regno << "\t" << s[i].degree << "\t\t" << s[i].sgpa << endl;
	}
	cout << endl << endl;
	cout << "List in sorted order: " << endl; 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (s[j].sgpa < s[j + 1].sgpa)
			{
				student temp = s[j];
				s[j] = s[j+1];
				s[j + 1] = temp;
			}
		}
	}
	cout << "S.No." << "\t" << "Name" << "\t" << "Reg.No." << "\t" << "Degree Program" << "\t" << "SGPA" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1;
		cout << "\t" << s[i].name << "\t" << s[i].regno << "\t" << s[i].degree << "\t\t" << s[i].sgpa << endl;
	}
	cout << "The best student is: " <<endl << s[0].name << "\t" << s[0].regno << "\t" << s[0].degree << "\t\t" << s[0].sgpa << endl;
	return 0;
}
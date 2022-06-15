#include <iostream>
using namespace std;
class MyFather
{
protected:
	string name;
	string eye_color;
	string hair_color;

public:
	MyFather()
	{
		cout << "Enter Father name: ";
		cin >> name;
		cout << "Enter Father eye color: ";
		cin >> eye_color;
		cout << "Enter Father hair color: ";
		cin >> hair_color;
	}
	string GetName()
	{
		return name;
	}
	string GetEyeColor()
	{
		return eye_color;
	}
	string GetHairColor()
	{
		return hair_color;
	}
};
class MyMother
{
protected:
	string name;
	string eye_color;
	string hair_color;

public:
	MyMother()
	{
		cout << "Enter Mother name: ";
		cin >> name;
		cout << "Enter Mother eye color: ";
		cin >> eye_color;
		cout << "Enter Mother hair color: ";
		cin >> hair_color;
	}
	string GetName()
	{
		return name;
	}
	string GetEyeColor()
	{
		return eye_color;
	}
	string GetHairColor()
	{
		return hair_color;
	}
};
class MySister : public MyFather, MyMother
{
protected:
	string education;
	int age;
public:
	MySister()
	{
		cout << "Enter Sister Education: ";
		cin >> education;
		cout << "Enter Sister age: ";
		cin >> age;
	}
	string GetEducation()
	{
		return education;
	}
	int GetAge()
	{
		return age;
	}
};
class MySelf : public MyFather
{
protected:
	string education;
	int age;
public:
	MySelf()
	{
		cout << "Enter Myself Education: ";
		cin >> education;
		cout << "Enter Myself age: ";
		cin >> age;
	}
	string GetEducation()
	{
		return education;
	}
	int GetAge()
	{
		return age;
	}
};
void menu()
{
	cout << "1. Father" << endl;
	cout << "2. Mother" << endl;
	cout << "3. Sister" << endl;
	cout << "4. Myself" << endl;
	cout << "0. Exit" << endl;
	cout << "Enter any option: ";
}
void MotherInfo()
{
	cout << "1. Mother Name" << endl;
	cout << "2. Mother Eye Color" << endl;
	cout << "3. Mother Hair Color" << endl;
	cout << "0. Exit" << endl;
}
void FatherInfo()
{
	cout << "1. Father Name" << endl;
	cout << "2. Father Eye Color" << endl;
	cout << "3. Father Hair Color" << endl;
	cout << "0. Exit" << endl;
}
void SisterInfo()
{
	cout << "1. Father Name" << endl;
	cout << "2. Father Eye Color" << endl;
	cout << "3. Father Hair Color" << endl;
	cout << "4. Sister Education" << endl;
	cout << "5. Sister Age" << endl;
	cout << "0. Exit" << endl;
}
void MySelfInfo()
{
	cout << "1. Father Name" << endl;
	cout << "2. Father Eye Color" << endl;
	cout << "3. Father Hair Color" << endl;
	cout << "4. My Education" << endl;
	cout << "5. My Age" << endl;
	cout << "0. Exit" << endl;
}
int main()
{
int x;
	do
	{
		menu();
		cin >> x;
		if (x == 1)
		{
			int n;
			MyFather F;
			do
			{
				FatherInfo();
				cin >> n;
				if (n == 1)
				{
					string s = F.GetName();
					cout << "Name of Father: " << s << endl;
				}
				else if (n == 2)
				{
					string s = F.GetHairColor();
					cout << "Hair Color of Father: " << s << endl;
				}
				else if (n == 3)
				{
					string s = F.GetHairColor();
					cout << "Hair Color of Father: " << s << endl;
				}
				else if (n == 0)
				{
					break;
				}
				else
				{
					cout << "Enter valid option: ";
				}
			} while (n != 0);
			
		}
		else if (x == 2)
		{
			int n;
			MyMother F;
			do
			{
				MotherInfo();
				cin >> n;
				if (n == 1)
				{
					string s = F.GetName();
					cout << "Name of Mother: " << s << endl;
				}
				else if (n == 2)
				{
					string s = F.GetHairColor();
					cout << "Hair Color of Mother: " << s << endl;
				}
				else if (n == 3)
				{
					string s = F.GetHairColor();
					cout << "Hair Color of Mother: " << s << endl;
				}
				else if (n == 0)
				{
					break;
				}
				else
				{
					cout << "Enter valid option: ";
				}
			} while (n != 0);
		}
		else if (x == 3)
		{
			int n;
			MyFather *F;
			MySister S;
			F = &S;
			do
			{
				SisterInfo();
				cin >> n;
				if (n == 1)
				{
					string s = F->GetName();
					cout << "Name of Father: " << s << endl;
				}
				else if (n == 2)
				{
					string s = F->GetHairColor();
					cout << "Hair Color of Father: " << s << endl;
				}
				else if (n == 3)
				{
					string s = F->GetHairColor();
					cout << "Hair Color of Father: " << s << endl;
				}
				else if (n == 4)
				{
					string s = S.GetEducation();
					cout << "Sister Education: " << s << endl;
				}
				else if (n == 5)
				{
					int s = S.GetAge();
					cout << "Sister Age: " << s << endl;
				}
				else if (n == 0)
				{
					break;
				}
				else
				{
					cout << "Enter valid option: ";
				}
			} while (n != 0);

		}
		else if (x == 4)
		{
		int n;
		MyFather* F;
		MySelf S;
		F = &S;
		do
		{
			MySelfInfo();
			cin >> n;
			if (n == 1)
			{
				string s = F->GetName();
				cout << "Name of Father: " << s << endl;
			}
			else if (n == 2)
			{
				string s = F->GetHairColor();
				cout << "Hair Color of Father: " << s << endl;
			}
			else if (n == 3)
			{
				string s = F->GetHairColor();
				cout << "Hair Color of Father: " << s << endl;
			}
			else if (n == 4)
			{
				string s = S.GetEducation();
				cout << "My Education: " << s << endl;
			}
			else if (n == 5)
			{
				int s = S.GetAge();
				cout << "My Age: " << s << endl;
			}
			else if (n == 0)
			{
				break;
			}
			else
			{
				cout << "Enter valid option: ";
			}
		} while (n != 0);
		}
	} while (x != 0);
	return 0;
}
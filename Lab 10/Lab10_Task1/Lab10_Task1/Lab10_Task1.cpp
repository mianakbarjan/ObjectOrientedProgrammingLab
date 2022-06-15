#include <iostream>
using namespace std;
int main()
{
	int FirstVariable;
	cout << "Enter value for first variable: ";
	cin >> FirstVariable;
	int SecondVariable = FirstVariable;
	cout << "Enter value for third variable: ";
	int ThirdVariable;
	cin >> ThirdVariable;
	cout << "Enter value for fourth variable (character): " ;
	char FourthVariable;
	cin >> FourthVariable;
	cout << "Enter value for fifth variable (character): ";
	char FifthVariable;
	cin >> FifthVariable;
	cout << "First Variable: " << FirstVariable << endl;
	cout << "Second Variable: " << SecondVariable << endl;
	cout << "Typecasting from char to int data type (Third + Fourth) = " << ThirdVariable + FourthVariable << endl;
	float z = ThirdVariable + FifthVariable;
	cout << "Type casting from int data to float type (Third + Fifth) = " << z << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int FirstValue;
	int SecondValue;
	cout << "Enter first value: ";
	cin >> FirstValue;
	cout << "Enter second value: ";
	cin >> SecondValue;
	float z = FirstValue / SecondValue;
	cout <<endl<< "Implicit Type Casting: " << endl << "Result: " << z << endl;
	float y = (float)FirstValue / SecondValue;
	cout << "Explicit Type Casting: " << endl << "The value of float variable (res): " << y;
	return 0;
}

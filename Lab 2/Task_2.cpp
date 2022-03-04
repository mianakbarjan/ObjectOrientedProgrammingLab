#include <iostream>
using namespace std;
#define powerm(num1, num2)(num1*(pow(2,num2)))
int main()
{
	int num1, num2;
	cout << "Enter number 1: ";
	cin >> num1; 
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "The answer is: " << powerm(num1, num2);
	return 0;
}
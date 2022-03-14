#include <iostream>
using namespace std;
class SWAP
{
public:
	int a, b;
	void setter()
	{
		cout << "Enter first value: ";
		cin >> a;
		cout << "Enter second value: ";
		cin >> b;
	}
	void Swap()
	{
		a=a+b;
		b = a-b;
		a = a-b;
	}
	void Display()
	{
		cout << "Before swapping A= " << b << " B= " << a << endl;
		cout << "After swapping A= " << a << " B= " << b;
	}
};
int main()
{
	SWAP A;
	A.setter();
	A.Swap();
	A.Display();
	return 0;
}
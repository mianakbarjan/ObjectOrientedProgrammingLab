#include <iostream>
using namespace std;
void print(int *s)
{
	cout <<"The value of ptr cast is:" << * s * 10 << endl;
}
int main()
{
	const int c = 50;
	cout << "Number: " << c << endl;
	print(const_cast<int*> (&c)); 
	return 0;

	return 0;
}
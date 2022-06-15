#include <iostream>
using namespace std;
int main()
{
	double Length;
	double Breadth;
	cout << "Enter the length of rectangle: ";
	cin >> Length;
	cout << "Enter the Breadth of rectangle: ";
	cin >> Breadth;
	int Area = static_cast<int>(Length * Breadth);
	cout << "Int: " << endl << "The area of the rectawngle is: " << Area << endl;
	float Area1 = static_cast<float>(Length * Breadth);
	cout << "Float: " << endl << "The area of the rectawngle is: " << Area1;
	return 0;
}
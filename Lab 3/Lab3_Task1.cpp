#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	int max = size;
	int* a = new int[size];
	cout << "Enter " << size << " values: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	size = size - 1;
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = a[i] - a[i + 1];
	}
	delete[] a;
	a = temp;
	cout << "Resultant array: [ ";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << "]";
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	int* a = new int[size];
	cout << "Enter " << size << " values: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < size; i++)
	{
		if ( max< a[i])
		{
			max = a[i];
		}
	}
	int smax = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] >= smax && a[i] < max)
			smax = a[i];
	}

	int min = a[size-1];
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	int smin = max;
	for (int i = 0; i < size; i++)
	{
		if (a[i] <= smin && a[i] > min)
			smin = a[i];
	}
	cout << "Second lowest: " << smin << endl;
	cout << "Second Highest: " << smax;

	return 0;
}
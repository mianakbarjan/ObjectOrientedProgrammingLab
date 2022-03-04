#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	int* a = new int[size];
	cout << "Enter " << size << " values: " << endl;
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	int neg1 = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0)
		{
			neg1++;
		}
	}
	int pos = 0;
	int neg = size - neg1;
	for (int i = 0; i < size; i++)
	{
		if (a[i] >= 0)
		{
			temp[pos] = a[i];
			pos++;
		}
		else if (a[i] < 0)
		{
			temp[neg] = a[i];
			neg++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << temp[i] << " ";
	}
	return 0;
}
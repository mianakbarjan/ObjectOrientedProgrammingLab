#include <iostream>
using namespace std;
class small_set
{
public:
	int arr[31];
	int i = 0;
	void set(int item)
	{
		
		if (item > 31)
		{
			cout << "Number cannot be added.";
		}
		else
		{
			arr[i] = item;
			i++;
		}
	}
	void clear(int item)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == item)
			{
				arr[j] = arr[j + 1];
			}
		}
	}
	void test(int item)
	{
		for (int i = 0; i < 31; i++)
		{
			if (arr[i] == item)
			{
				cout << "1";
				break;
			}
			else
			{
				cout << "0";
				break;
			}
		}
	}
};
int main()
{
	small_set a;
	int c, d, e;
	int num;
	cout << "Enter number to add: ";
	cin >> c>>d>>e;
	a.set(c);
	a.set(d);
	a.set(e);
	a.clear(d);
	a.clear(e);
	cout << endl;
	a.test(c);
	cout << endl;
	a.test(d);
	cout << endl;
	a.test(e);
	return 0;
}
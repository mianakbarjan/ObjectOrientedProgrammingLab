#include <iostream>
using namespace std;

class parity
{
private:
	int size;
	int* a = new int[size];
public:
	parity()
	{
		size = 0;
		a = { 0 };
	}
	void put(int number)
	{
		int num = size; 
		size = size + 1;
		int* b = new int[size];
		for (int i = 0; i < num; i++)
		{
			b[i] = a[i];
		}
		delete[] a;
		a = b;
		a[num] = number;
		num++;
		
	}
	void print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}
	}
	void del()
	{
		size = size -1;
		int* b = new int[size];
		for (int i = 0; i < size; i++)
		{
			b[i] = a[i];
		}
		delete[] a;
		a = b;
	}
	int test()
	{
		if (size % 2 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	~parity()
	{
	}
};
int main()
{
	parity p;
	while (true)
	{
		cout << "--------- MENU ---------" << endl;
		cout << "1. Put" << endl;
		cout << "2. Print" << endl;
		cout << "3. Delete" << endl;
		cout << "4. Test" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter any option: \n";
		int option;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			cout << "Put new value: ";
			int x;
			cin >> x;
			p.put(x);
			break;
		}
		case 2:	
		{
			p.print();
			cout << endl;
			break;
		}
		case 3:
		{
			p.del();
			break;
		}
		case 4:
		{
			int c = p.test();
			if (c == 1)
			{
				cout << "True(1)" << endl;
			}
			else
			{
				cout << "False(0)" << endl;
			}
			break;
		}
		case 0:
		{
			exit(0);
		}
		default:
		{
			cout << "Enter valid option: " << endl;
			break;
		}
		}
	}
	return 0;
}
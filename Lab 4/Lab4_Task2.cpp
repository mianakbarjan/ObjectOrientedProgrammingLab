#include <iostream>
using namespace std;
class twoDArray
{
public:
	int arr[5][5];
	int arr1[5][5];
	void initialize()
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cin>>arr[i][j];
			}
		}
	}
	void Print()
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	void Transpose()
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				arr1[i][j] = arr[j][i];
			}
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << arr1[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	void isSymmetry()
	{
		int count = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (arr[i][j] != arr1[i][j])
				{
					count++;
				}
			}
		}
		if (count != 0)
		{
			cout << "The array is not symmetric.";
		}
		else
		{
			cout << "The array is symmetric.";
		}
	}
	void multiply(twoDArray obj1, twoDArray obj2)
	{
		int arr2[5][5] = { 0 };
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				for (int k = 0; k < 5; k++)
				{
					arr2[i][j] += obj1.arr[i][k] * obj2.arr[k][j];
				}
			}
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}
	}
	

};
void menu()
{
	cout << "Menu" << endl;
		cout << "1. Initialize" << endl;
		cout << "2. Print" << endl;
		cout << "3. Transpose" << endl;
		cout << "4. isSymmetry" << endl;
		cout << "5. Multiply" << endl;
		cout << "Enter any option: ";	
}
int main()
{
	twoDArray a, b, c;
	while (true)
	{
		menu();
		int option;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			cout << "Enter 25 values two initialize first array: ";
			a.initialize();
			cout << endl;
			break;
		}
		case 2:
		{
			cout << "Print array: " << endl;
			a.Print();
			break;
		}
		case 3:
		{
			cout << "Transpose of array: " << endl;
			a.Transpose();
			break;
		}
		case 4:
		{
			a.isSymmetry();
			break;
		}
		case 5:
		{
			b.initialize();
			c.multiply(a, b);
			break;
		}

		}
	}
		return 0;
	}

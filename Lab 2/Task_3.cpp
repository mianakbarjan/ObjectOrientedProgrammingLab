#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	cout << "Enter base system: ";
	int n;
	cin >> n;
	if (n == 2)
	{
		cout << "Enter number 1: ";
		bitset<4> n1;
		cin >> n1;
		cout << "Enter number 2: ";
		bitset<4> n2;
		cin >> n2;
		bitset<4> ans;
		ans = n1 & n2;
		cout << ~ans;
	}
	else if (n == 10) {
		cout << "Enter number 1: ";
		int n1;
		cin >> n1;
		cout << "Enter number 2: ";
		int n2;
		cin >> n2;
		int n3 = n1 + n2;
		cout << n1 << " + " << n2 << " = " << n3;
	}
	else if (n == 8)
	{
		int a, b;
		cout << "Enter number 1: ";
		int n1;
		cin >> n1;
		int c = 0;
		int tempn1;
		tempn1 = n1;
		while (tempn1 > 0)
		{
			tempn1 = tempn1 / 10;
			c++;
		}
		cout << "Enter number 2: ";
		int n2;
		cin >> n2;
		int tempn2;
		tempn2 = n2;
		int d = 0;
		while (tempn2 > 0)
		{
			tempn2 = tempn2 / 10;
			d++;
		}
		int temp = 0;
		if (c >= d)
		{
			temp = c;
		}
		else
		{
			temp = d;
		}
		int sum = 0;
		int run = 0;
		int n11, n22;
		int carry;
		int arr[10] = { 0 };
		int i = 9;
		while (run<=temp)
		{
			sum += ((n1 % 10) + (n2 % 10));
			if (sum >= 8 && carry==1)
			{
				carry = 0;
				arr[i] = sum - 8;
				i--;
			}
			else if (sum>=8)
			{
				carry = 1;
				arr[i] = sum - 8;
				i--;
			}
			else
			{
				arr[i] = sum;
			}
			sum = 0;
			n1 = n1 / 10;
			n2 = n2 / 10;
			run++;
		}
		for (int j = 0; j < 10; j++)
		{
			if (arr[j] != 0)
			{
				cout << arr[j];
			}
		}
	}
	else if (n == 16)
	{
		cout << "Enter number 1: ";
		int n1;
		cin >> n1;
		cout << "Enter number 2: ";
		int n2;
		cin >> n2;
	}
	return 0;
}

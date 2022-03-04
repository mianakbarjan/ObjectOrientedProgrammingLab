#include <iostream>
#include <bitset>
using namespace std;
bitset<8> c;
#define check()((c==0) ? 0 : 1)
int main()
{
	cout << "Please enter number: ";
	int n,d;
	cin >> n;
	bitset <8> a;
	a = bitset<8>((int)n);
	bitset <8> b;
	b = bitset<8>((int)n - 1);
	c = b & a;
	d=check();
	if (d == 0)
	{
		cout << n << " is a power of 2.";
	}
	else
	{
		cout << n << " is not a power of 2.";
	}
	return 0;
}
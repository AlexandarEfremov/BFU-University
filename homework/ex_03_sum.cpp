#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int a, b, c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	if (a == 0)
	{
		cout << c - b << "\n";
	}
	else if (b == 0)
	{
		cout << c - a << "\n";
	}
	else
	{
		cout << a + b << "\n";
	}

	return 0;
} 

#include<algorithm>
#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int a, b;
	cout << "Въведете число от интервала [10..5555]: ";
	cin >> a;
	cout << "Въведете второ число от интервала [10..5555]: ";
	cin >> b;

	int end = std::min(a, b);
	int start = std::max(a, b);
	
	for (int i = start; i >= end; i--)
	{
		if (i % 50 == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
} 

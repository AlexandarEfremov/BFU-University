#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int n, m, k;
	cout << "Въведете стойности за n, m и к от интервала [2..10]: ";
	cin >> n >> m >> k;
	
	int product = n + m;
	for (int i = 2; i <= k; i++)
	{
		int value = n+i*m;
		product *= value;
	}

	cout << product << "\n";
	return 0;
} 

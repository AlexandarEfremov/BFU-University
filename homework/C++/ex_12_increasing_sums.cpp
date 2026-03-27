#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int n, m, k;
	cout << "Въведете стойности за n, m и к от интервала [2..10]: ";
	cin >> n >> m >> k;
	
	int sum = n + m;
	for (int i = 2; i <= k; i++)
	{
		int value = n+i*m;
		sum += value;
		cout << "Value: " << value << " " << "Sum: " << sum << "\n";
	}

	cout << sum << "\n";
	return 0;
} 

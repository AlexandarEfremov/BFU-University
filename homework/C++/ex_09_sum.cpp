#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int num;
	do
	{
		cout << "Въведете число от интервала [3..102]: ";
		cin >> num;
	} while (num < 3 || num > 102);

	int sum = 0;

	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}

	cout << sum << "\n";

	return 0;
} 

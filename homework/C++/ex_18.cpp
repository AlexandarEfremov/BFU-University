#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int num;
	do
	{
		cout << "Въведете число от интервала [10..99]: ";
		cin >> num;
	} while(num < 10 || num > 99);

	int previous_num = num;

	do
	{
		if (previous_num % 2 == 0)
		{
			previous_num *= 0.5;
			cout << previous_num << "\n";
		}
		else 
		{
			previous_num = (3 * previous_num) + 1;
			cout << previous_num << "\n";
		}
	} while(previous_num > 1);

	return 0;
} 

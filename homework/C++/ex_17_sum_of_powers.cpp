#include<iostream>
#include<cmath>
using std::cout;
using std::cin;

int main()
{
	int num, base;
	cout << "Въведете число от интервала [9..999999]: ";
	cin >> num;

	cout << "Въведете число за основа на степенуване от интервала [2..9]: ";
	cin >> base;

	int max_pow_value = 0;
	while (true)
	{
		int temp_value = pow(base, max_pow_value);
		if (temp_value <= num)
		{
			max_pow_value++;	
		}
		else
		{
			max_pow_value--;
			break;
		}
	}

	for (int i = max_pow_value; i >= 0; i--)
	{
		int current_val = pow(base, i);
		if (current_val <= num)
		{
			cout << current_val << "\n";
			num -= current_val;
		}
		else
		{
			continue;
		}
	}

	return 0;
} 

#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int num;
	do
	{
		cout << "Въведете число в интервала [2, 27] ";
		cin >> num;
	} while (num < 2 || num > 27);

	for (int i = 100; i <= 999; i++)
	{
		int first_digit = i / 100;
		int second_digit = (i % 100) / 10;
		int third_digit = i % 10;
		int sum_digits = first_digit + second_digit + third_digit;

		if (sum_digits == num)
		{
			cout << i << " ";
		}
	}
	return 0;
} 

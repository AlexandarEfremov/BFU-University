#include<iostream>
#include<cmath>
using std::cout;
using std::cin;

int main()
{
	int num;
	cout << "Въведете двуцифрено число кратно на 3: ";
	cin >> num;

	int first_digit = num / 10;
	int second_digit = num % 10;

	long sum = pow(first_digit,3) + pow(second_digit, 3);
	cout << sum << "\n";

	while (sum != 153)
	{
		first_digit = sum / 100;
		second_digit = (sum % 100) / 10;
		int third_digit = sum % 10;

		if (sum > 100)
		{
			sum = pow(first_digit,3) + pow(second_digit,3) + pow(third_digit, 3);
			cout << sum << "\n";
		}
		else
		{
			sum = pow(first_digit,3) + pow(second_digit, 3) + pow(third_digit, 3);
			cout << sum << "\n";
		}
	}

	return 0;
}

#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int num;

	do
	{
		cout << "Въведете трицифрено число от интервала[100..999]: ";
		cin >> num;
	} while (num > 999 || num < 100);

	int first_digit = num / 100;
	int second_digit = (num % 100) / 10;
	int third_digit = num % 10;

	int product = first_digit * second_digit * third_digit;

	std::string divisible = (num % product == 0) ? "е" : "не е";
	cout << "Произведение = " << product << "\n";
	cout << "Числото " << divisible << " кратно на цифрите си." << "\n";

	return 0;
} 

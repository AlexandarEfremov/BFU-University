#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int total_count = 0;

	int num_1, num_2;
	cout << "Въведете първото число: ";
	cin >> num_1;

	cout << "Въведете второто число: ";
	cin >> num_2;

	int max_num = std::max(num_1, num_2);
	int min_num = std::min(num_1, num_2);

	for (int i = min_num; i <= max_num; i++)
	{
		int first_digit = i / 100;
		int second_digit = (i % 100) / 10;
		int third_digit = i % 10;
		total_count += (first_digit == 5) ? 1 : 0;		
		total_count += (second_digit == 5) ? 1 : 0;		
		total_count += (third_digit == 5) ? 1 : 0;		
	}

	cout << "Total count: " << total_count << "\n";
} 

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
		int first = i / 100;
		int second = (i % 100) / 10;
		int third = i % 10;
		total_count += (first < second && second < third) ? 1 : 0;
	}

	cout << total_count << "\n";
	return 0;
} 

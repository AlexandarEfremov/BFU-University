#include<iostream>
#include<string>
#include <vector>
using std::cout;
using std::string;
using std::cin;

int main()
{
	int total_count = 0;
	std::vector<string> my_vec;

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
		
		if (!third == 0)
		{
			int new_number = (third * 10) + first;
			if (i % new_number == 0)
			{
				string string_i = std::to_string(i);
				string string_new_number = std::to_string(new_number);
				string combined = string_i + "/" + string_new_number;
				my_vec.push_back(combined);
			}
		}
	}

	for (string value : my_vec)
	{
		cout << value << "\n";
	}
	return 0;
}

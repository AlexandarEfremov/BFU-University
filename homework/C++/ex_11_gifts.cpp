#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;

int main()
{
	int money, friends, gifts;
	cout << "Въведете стойности за 'сума', 'брой приятели' и 'брой подаръци': ";
	cin >> money >> friends >> gifts;

	float decimal_money = static_cast<float>(money);
	float max_per_person = decimal_money / friends;
	float final_amount = 0;

	for (int i = 1; i <= gifts; i++)
	{
		float gift_value;
		cout << "Въведете цена за подарък #" << i << ": ";
		cin >> gift_value;
		if (gift_value <= max_per_person && gift_value > final_amount)
		{
			final_amount = gift_value;
		}
	}

	cout << std::fixed << std::setprecision(2) << final_amount << "\n";
	return 0;
} 

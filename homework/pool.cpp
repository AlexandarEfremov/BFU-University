#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int volume, p1, p2, p3;
	cout << "Въведете обема на басейна и три дебитни тръби (p1, p2, p3) ";
	cin >> volume >> p1 >> p2 >> p3;

	int total_water = p1 + p2 + p3;
	int total_hours = volume / total_water;
	cout << total_hours << "\n";
	if (p1 < 0 || p2 < 0 || p3 < 0)
	{
		cout << "Една от тръбите изпразва басейна.\n";
	}
	return 0;
} 

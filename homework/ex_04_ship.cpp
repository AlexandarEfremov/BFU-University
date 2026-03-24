#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int distance, ship_speed, current_speed;
	cout << "Въведете разстояние, скорост на кораба и скорост на течението: ";
	cin >> distance >> ship_speed >> current_speed;

	int actual_speed = ship_speed + current_speed;
	int time_to_dest = distance / actual_speed;
	std::string x = (current_speed > 0) ? "по" : "срещу";

	cout << "Време = " << time_to_dest << "\n";
	cout << "Корабът е " << x << " течението" << "\n";
	return 0;
} 

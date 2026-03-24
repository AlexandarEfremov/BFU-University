#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int tri;
	cout << "Въведете брой зъбци на триона: ";
	cin >> tri;

	int total_width = 0;
	int max_height = 0;

	for (int i = 1; i <= tri; i++)
	{
		int width, height;
		cout << "Въведете широчина и височина за зъб #" << i << " на триона: ";
		cin >> width >> height;
		total_width += width;
		if (height > max_height)
		{
			max_height = height;
		}
	}
	
	cout << "Дължина = " << total_width << "\n";
	cout << "Широчина = " << max_height << "\n";

	return 0;
} 

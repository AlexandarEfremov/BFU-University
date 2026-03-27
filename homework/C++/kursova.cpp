#include<iostream>
#include<cmath>
using std::cout;
using std::cin;

void validation_fail();
double factorial(double num);

int main()
{
	int x, n;
	while (true)
	{
		cout << "Въведете стойност за x: ";
		cin >> x;
		if (cin.fail()) 
		{
			validation_fail();
		}
		else break;
	}

	while (true)
	{
		cout << "Въведете стойност за n (брой цикли): ";
		cin >> n;
		if (cin.fail()) 
		{
			validation_fail();
		}
		else break;
	}

	double sum = 0;

	for (int i = 0; i <= n; i++)
	{
		//Използвана формула: Σ ((-x)^i) / n!
		double  numerator = pow(-x, i);
		double  denominator = static_cast<double>(factorial(i));
		double  result = numerator / denominator;
		sum += result;
	}

	cout << "Result: " << sum << "\n";

	return 0;
} 

void validation_fail()
{
	cout << "Въведената стойност не е цяло число, моля опитайте пак" << "\n";
	cin.clear();
	cin.ignore(10000, '\n'); 
}

double factorial(double num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}


#include <iostream>
#include <vector>
using std::cout;
using std::cin;

bool isPrime(int n)
{
	if (n <= 1)
	{
        return false;
	}

    for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return false;
	}

    return true;
}

int main()
{
	int num;
	do
	{
		cout << "Въведете число от интервала [10..10000]: ";
		cin >> num;
	} while (num < 10 || num > 10000);
	
	std::vector<int> my_vec;
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0 && isPrime(i))
		{
			my_vec.push_back(i);
		}
	}

	for (int element : my_vec)
	{
		cout << element << " ";
	}
	return 0;
} 

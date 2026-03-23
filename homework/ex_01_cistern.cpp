// Трябва да се напълни цистерна с вода. Имате 2 кофи с вместимост 2 и 3 литра
// и ги ползвате едновременно. Да се състави програма, която по въведен обем
// извежда как ще прелеете течността с тези кофи, т.е. по-колко пъти ще се
// пълни всяка от кофите. Входни данни: естествено число от интервала [10 …
// 9999].

#include<iostream>
using namespace std;

const int BUCKET_ONE_LT = 2;
const int BUCKET_TWO_LT = 3;

int main()
{
	int total_water;
	cout << "Въведете литри: ";
	cin >> total_water;

	int combined = (BUCKET_ONE_LT + BUCKET_TWO_LT);
	int both_buckets = total_water / combined;

	bool has_remainder = (total_water % combined) != 0;
	
	cout << both_buckets << " пъти двете кофи.\n";

	if (has_remainder) 
	{
		int rest = total_water % combined;
		int bucket = (rest <= BUCKET_ONE_LT) ? BUCKET_ONE_LT : BUCKET_TWO_LT;
		string plural = (rest == 1) ? "литър" : "литра";
		cout << "Остава " << rest << " " << plural << ", можем да използваме кофата от " << bucket << " литра.\n";
	} 

	return 0;
} 

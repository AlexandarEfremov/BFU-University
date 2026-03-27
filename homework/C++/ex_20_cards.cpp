#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main()
{
	const int TOTAL_CARDS = 52;
	const int CARD_VALUES = 13;
	const int CARD_SUITS = 4;

	int card_index;
	cout << "Въведете индекс на карта: ";
	cin >> card_index;

	string cards[CARD_VALUES] = {"2","3","4","5","6","7","8","9","10","Вале","Дама","Поп","Асо"};
	string suits[CARD_SUITS] = {"спатия", "каро", "купа", "пика"};

	string deck[TOTAL_CARDS];
	int iteration = 0;

	for (string current_card : cards)
	{
		for (string current_suit : suits)
		{
			string combined_card = current_card + " " + current_suit;
			deck[iteration] = combined_card;
			iteration++;
		}
	}

	for (int i = card_index; i<= TOTAL_CARDS; i++)
	{
		cout << deck[i - 1] << "\n";
	}
	
	return 0;
} 

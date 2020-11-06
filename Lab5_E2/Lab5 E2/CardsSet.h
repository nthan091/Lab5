#include "Card.h"
#include <cstdlib>
#include <ctime>

class CardsSet {
public:
	CardsSet() : number(0) {}
	void novSet();
	void shuffle();
	int numCards() { return number; }
	Card take();
	void put(Card k);
	Card lookIn(int no);
	void empty() { number = 0; }
private:
	Card set[52];
	int number;
};

void CardsSet::novSet() {
	Card newSet[52];
}

void CardsSet::shuffle() {
	srand(time(NULL));
	number = rand() % 13 + 1;
	int count = 1;
	for (int i = 0; i < 52; i++) {
		number = rand() % 14 + 1;
		cout << count << number << endl;
		count++;
	}
}

Card CardsSet::take() {
	Card c = set[0];
	number = number - 1;
	return c;
}

void CardsSet::put(Card k) {
	k = set[0];
	number = number + 1;
}

Card CardsSet::lookIn(int no) {
	Card c;
	for (int i = 1; i < number; i++) {
		if (i == no) {
			c = set[i];
			return c;
		}
	}
}

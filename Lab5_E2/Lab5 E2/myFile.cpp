#include "Player.h"
#include "Card.h"
#include "CardsSet.h"
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cassert>
int main() {
	CardsSet packet;
	Player you(packet, false);
	Player me(packet, true);
	char answer[3];
	bool continues = true;
	cout << "Hello! " << endl;
	while (continues)
	{
		cout << "A new game? " << endl;
		cin >> answer;
		continues = answer[0] == 'y';
		if (continues)
		{
			packet.novSet();
			packet.shuffle();
			int p1 = you.play();
			if (p1 > 21)
				cout << "You lost! " << endl;
			else if (p1 == 21)
				cout << "You won! " << endl;
			else // the computer must play
			{
				int p2 = me.play();
				if (p2 <= 21 && p2 >= p1)
					cout << "You lost! " << endl;
				else
					cout << "You won! " << endl;
			}
		}
	}
	return 0;
}

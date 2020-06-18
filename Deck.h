#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include "Extract.h"
#include<string>
using namespace std;
class Deck
{
private:
	Card first;
	Card second;
	Card third;
	Card fourth;
	Card fifth;
	int cardnumber = 0;
	int array[5];

public:
	string name;
	Deck(string);
	void push(int);
	void print();
	void lastprint();
	int* getarray();
};

#endif // !DECK_H

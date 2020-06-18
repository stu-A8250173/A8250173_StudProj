#include "Deck.h"
#include "Card.h"
#include "Extract.h"
#include<iostream>
Deck::Deck(string n)
{
	name = n;
}

void Deck::push(int set)
{
	cardnumber++;
	if (cardnumber == 1) {
		array[0] = set;
		first.setnumber(set);
	}
	else if (cardnumber == 2) {
		array[1] = set;
		second.setnumber(set);
	}
	else if (cardnumber == 3) {
		array[2] = set;
		third.setnumber(set);
	}
	else if (cardnumber == 4) {
		array[3] = set;
		fourth.setnumber(set);
	}
	else if (cardnumber == 5) {
		array[4] = set;
		fifth.setnumber(set);
	}
	
}

void Deck::print()
{
	if (cardnumber == 1)
	{
		cout << name << ":" << endl;
		first.print();
		cout << endl;
	}
	else if (cardnumber == 2)
	{
		cout << name << ":" << endl;
		cout << "©³µP" << " ";
		second.print();
		cout << endl;
	}
	else if (cardnumber == 3)
	{
		cout << name << ":" << endl;
		cout << "©³µP" << " ";
		second.print();
		third.print();
		cout << endl;
	}
	else if (cardnumber == 4)
	{
		cout << name << ":" << endl;
		cout << "©³µP" << " ";
		second.print();
		third.print();
		fourth.print();
		cout << endl;
	}
	else if (cardnumber == 5)
	{
		cout << name << ":" << endl;
		cout << "©³µP" << " ";
		second.print();
		third.print();
		fourth.print();
		fifth.print();
		cout << endl;
	}
}

void Deck::lastprint()
{
	cout << name << ":" << endl;
	first.print();
	second.print();
	third.print();
	fourth.print();
	fifth.print();
	cout << endl;
}

int* Deck::getarray()
{
	return array;
}

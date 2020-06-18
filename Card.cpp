#include "Card.h"
#include<string>
#include<iostream>

string scard[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };

string kind[4] = { "¶Â®ç","¬õ¤ß","¤è¶ô","±öªá" };

Card::Card()
{
	
}
Card::Card(int n)
{
	setnumber(n);
}

void Card::setnumber(int nn)
{
	number = nn;
	n = (number - 1) % 13+1;
	f = (number - 1) / 13+1;
	
}

int Card::getnumber()
{
	return number;
}

void Card::print()
{
	cout << kind[(number - 1) / 13] << scard[(number - 1) % 13] << " ";
}
#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;
class Card
{
private:

	int number;

public:

	Card(int);
	void setnumber(int);
	int getnumber();
	void print();


};

#endif // !CARD_H
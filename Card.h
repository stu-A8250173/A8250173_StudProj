#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;
class Card
{
private:

	int number;


public:
	Card();
	Card(int);
	void setnumber(int);
	int getnumber();
	void print();
	int n;//¼Æ¦r
	int f;//ªá¦â

};

#endif // !CARD_H
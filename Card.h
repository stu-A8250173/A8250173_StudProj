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
	int n;//�Ʀr
	int f;//���

};

#endif // !CARD_H
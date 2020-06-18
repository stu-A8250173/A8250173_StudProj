#ifndef BET_H
#define BET_H
#include<iostream>
using namespace std;
class Bet {
private:

	int quant=10;

public:


	Bet();


	void setQuant(int);//¤Uª`
	int getQuant();


	void follow(Bet&);//¸ò
	void playerCover(Bet&);//¥[

	int drop1();
	int drop2();//±ó


};

#endif // !BET_H


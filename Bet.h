#ifndef BET_H
#define BET_H
#include<iostream>
using namespace std;
class Bet {
private:

	int quant=10;

public:


	Bet();


	void setQuant(int);//�U�`
	int getQuant();


	void follow(Bet&);//��
	void playerCover(Bet&);//�[

	int drop1();
	int drop2();//��


};

#endif // !BET_H


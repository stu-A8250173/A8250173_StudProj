#ifndef PREPROCESS_H
#define PREPROCESS_H
#include"Deck.h"
#include"Card.h"


class Preprocess
{

public:
	Card P1;
	Card P2;
	Card P3;
	Card P4;
	Card P5;

	Preprocess();
	Preprocess(Deck);
	void setPreprocess(Deck);
	int P[5];//Deck傳進來
	int PN[5];//數字
	void xironstick();//鐵支
	void xthird();//三條
	void xpair();//對子
	void xstright();//順子
	void xflush();//同花
	void xnone();//散排

	int pair=0;
	int pairnumber = 0;//
	int third=0;
	int thirdnumber = 0;//
	int stright=0;
	int flush=0;
	int ironstick=0;
	int ironnumber = 0;//
	int none=0;

};
#endif // !PREPROCESS_H

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
	int P[5];//Deck�Ƕi��
	int PN[5];//�Ʀr
	void xironstick();//�K��
	void xthird();//�T��
	void xpair();//��l
	void xstright();//���l
	void xflush();//�P��
	void xnone();//����

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

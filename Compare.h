#ifndef COMPARE_H
#define COMPARE_H
#include "Deck.h"
#include "Preprocess.h"
using namespace std;

class Compare
{

public:
	Preprocess PP1;
	Preprocess PP2;
	Compare(Deck, Deck);
	int P1[5];
	int P2[5];
	int Play();//��X���O
	int L1;//lastnumber1
	int L2;//lastnumber2
	int compare2();//���lastnumber
	//Straightflush();//�P�ᶶ(9)
	// Ironstick();//�K��(8)
	// Fullhouse();//��Ī(7)
	// Flush();//�P��(6)
	// Straight();//���l(5)
	// Thirdstick();//�T��(4)
	// Doublepair();//���(3)
	// Pair();//��l(2)
	// None();//���P(1)

};
#endif // !COMPARE_H


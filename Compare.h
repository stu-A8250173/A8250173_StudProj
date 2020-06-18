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
	int Play();//找出型別
	int L1;//lastnumber1
	int L2;//lastnumber2
	int compare2();//比較lastnumber
	//Straightflush();//同花順(9)
	// Ironstick();//鐵支(8)
	// Fullhouse();//葫蘆(7)
	// Flush();//同花(6)
	// Straight();//順子(5)
	// Thirdstick();//三條(4)
	// Doublepair();//兩對(3)
	// Pair();//對子(2)
	// None();//散牌(1)

};
#endif // !COMPARE_H


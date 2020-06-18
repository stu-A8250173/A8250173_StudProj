#include "Compare.h"
#include"Deck.h"
#include<iostream>
#include "Preprocess.h"
Compare::Compare(Deck D1, Deck D2)
{
	PP1.setPreprocess(D1);
	PP2.setPreprocess(D2);
	for (int i = 0; i < 5; i++)
	{
		P1[i] = PP1.PN[i];
		P2[i] = PP2.PN[i];//排好的移植過來
	}
	int k = 0;
	

}

int Compare::Play()
{
	if (PP1.flush == 1 && PP1.stright == 1)
		L1 = 9;
	else if (PP1.ironstick == 1)
		L1 = 8;
	else if (PP1.third == 1 && PP1.pair == 1)
		L1 = 7;
	else if (PP1.flush == 1)
		L1 = 6;
	else if (PP1.stright == 1&&PP1.pair==0)
		L1 = 5;
	else if (PP1.third == 1)
		L1 = 4;
	else if (PP1.pair == 2)
		L1 = 3;
	else if (PP1.pair == 1)
		L1 = 2;
	else if (PP1.none == 1)
		L1 = 1;

	if (PP2.flush == 1 && PP2.stright == 1)
		L2 = 9;
	else if (PP2.ironstick == 1)
		L2 = 8;
	else if (PP2.third == 1 && PP2.pair == 1)
		L2 = 7;
	else if (PP2.flush == 1)
		L2 = 6;
	else if (PP2.stright == 1 && PP1.pair == 0)
		L2 = 5;
	else if (PP2.third == 1)
		L2 = 4;
	else if (PP2.pair == 2)
		L2 = 3;
	else if (PP2.pair == 1)
		L2 = 2;
	else if (PP2.none == 1)
		L2 = 1;

	int k=compare2();
	return k;
	
}

int Compare::compare2()
{
	if (L1 > L2)
		return 1;
	else if (L2 > L1)
		return 2;
	else if (L1 == L2)
	{
		if (L1 == L2 == 1)
		{
			if (P1[4] > P2[4])
				return 1;
			else
				return 2;
		}
		else if (L1 == L2 == 2)
		{
			if (PP1.pairnumber > PP2.pairnumber)
				return 1;
			if (PP2.pairnumber > PP1.pairnumber)
				return 2;
		}
		else if (L1 == L2 == 3)
		{
			if (PP1.pairnumber > PP2.pairnumber)
				return 1;
			if (PP2.pairnumber > PP1.pairnumber)
				return 2;
		}
		else if (L1 == L2 == 4)
		{
			if (PP1.thirdnumber > PP2.thirdnumber)
				return 1;
			if (PP2.thirdnumber > PP1.thirdnumber)
				return 2;
		}
		else if (L1 == L2 == 5)
		{
			if (P1[4] > P2[4])
				return 1;
			else
				return 2;
		}
		else if (L1 == L2 == 6)
		{
			if (PP1.thirdnumber > PP2.thirdnumber)
				return 1;
			if (PP2.thirdnumber > PP1.thirdnumber)
				return 2;
		}
		else if (L1 == L2 == 7)
		{
			if (PP1.P1.f < PP2.P1.f)
				return 1;
			if (PP1.P1.f < PP2.P1.f)
				return 2;
		}
		else if (L1 == L2 == 8)
		{
			if (PP1.ironnumber > PP2.ironnumber)
				return 1;
			if (PP2.ironnumber > PP1.ironnumber)
				return 2;
		}
		else if (L1 == L2 == 9)
		{
			if (P1[4] > P2[4])
				return 1;
			else
				return 2;
		}
	}
}



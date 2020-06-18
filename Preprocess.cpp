#include "Preprocess.h"

Preprocess::Preprocess()
{
}

Preprocess::Preprocess(Deck D1)
{
	setPreprocess(D1);
}

void Preprocess::setPreprocess(Deck D1)
{
	int* x = D1.getarray();
	for (int j = 0; j < 5; j++)
		P[j] = x[j];

	P1.setnumber(P[0]);
	P2.setnumber(P[1]);
	P3.setnumber(P[2]);
	P4.setnumber(P[3]);
	P5.setnumber(P[4]);
	PN[0] = P1.n;
	PN[1] = P2.n;
	PN[2] = P3.n;
	PN[3] = P4.n;
	PN[4] = P5.n;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (PN[j] > PN[j + 1])
			{
				int temp = PN[j];
				PN[j] = PN[j + 1];
				PN[j + 1] = temp;
		
			}

		}

	}
	xironstick();
}

void Preprocess::xthird()
{
	if (ironstick == 0)
	{
		if (PN[0] == PN[1] == PN[2]) {
			third++;
			thirdnumber = PN[2];
		}
		else if (PN[1] == PN[2] == PN[3]) {
			third++;
			thirdnumber = PN[2];
		}
		else if (PN[2] == PN[3] == PN[4]){
			third++;
			thirdnumber = PN[2];
		}

	}
	xpair();
}

void Preprocess::xpair()
{
	if (ironstick == 0)
	{
		if (third == 0)
		{
			if (PN[0] == PN[1]) {
				pair++;
				pairnumber = PN[0];
			}
			if (PN[1] == PN[2]) {
				pair++;
				pairnumber = PN[1];
			}
			if (PN[2] == PN[3]) {
				pair++;
				pairnumber = PN[2];
			}
			if (PN[3] == PN[4]) {
				pair++;
				pairnumber = PN[3];
			}
		}
		if (third == 1)
		{
			if (thirdnumber == PN[0])
			{
				if (PN[3] == PN[4]) {
					pair++;
					pairnumber = PN[3];
				}
			}
			if (thirdnumber == PN[4])
			{
				if (PN[0] == PN[1]) {
					pair++;
					pairnumber = PN[0];
				}
			}
		}



		xstright();
	}
}

void Preprocess::xstright()
{
	
	if (PN[0]+4==PN[4])
		if(ironstick==third==pair==0)
		stright++;

	xflush();
}

void Preprocess::xflush()
{
	if (P1.f == P2.f == P3.f == P4.f == P5.f)
		flush++;

	xnone();
}

void Preprocess::xironstick()
{
	if (P1.n == P2.n == P3.n == P4.n) {
		ironstick++;
		ironnumber = P1.n;
	}
	else if (P2.n == P3.n == P4.n == P5.n) {
		ironstick++;
		ironnumber = P5.n;
	}
	xthird();

}

void Preprocess::xnone()
{
	if (pair == third == stright == flush == ironstick == 0)
		none++;
}
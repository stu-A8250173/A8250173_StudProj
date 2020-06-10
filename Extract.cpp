#include"Extract.h"
#include<iostream>
#include<vector>
#include<ctime>

int number = 52;

Extract::Extract()
{


	for (int i = 0; i < 52; i++)
	{
		deck.push_back(i+1);
	}
	srand(time(0));
	for (int i = 0; i < 52; i++)
	{
		int index = rand() % 52;
		int temp = deck[i];
		deck[i] = deck[index];
		deck[index] = temp;
	}
	
}

int Extract::licensing()
{
	int k = deck.at(number-1);
	deck.pop_back();
	number--;
	return k;

	system("pause");
}
#ifndef WALLET_H
#define WALLET_H
#include"Bet.h"
#include"PlayerName.h"
using namespace std;
class Wallet
{
private:
	
public:
	Wallet(PlayerName, PlayerName);//�C���}�l�ɥ��}
	int play(int);//���@��(�_�⪱�a(1or2))
	Bet P1;
	Bet P2;

	int getCommands1();
	int commandExe1(char);
	int getCommands2();
	int commandExe2(char);
	PlayerName N1;
	PlayerName N2;

	int quant;//�U�`�q
	int stake1 = 500, stake2 = 500;

	void lastStep(int);//��Ĺ��(Ĺ�a1or2)

	void print();




};
#endif // !WALLET_H

